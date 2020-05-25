//+++++++++++++++++++question+++++++++++++++++++
//
//斐波那契数列是一组第一位和第二位为1，从第三位开始，后一位是前两位和的一组递增数列，
//像这样的：1、1、2、3、5、8、13、21、34、55......
//
//+++++++++++++++++++solution+++++++++++++++++++
#include <stdio.h>
int Fibon1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibon1(n - 1) + Fibon1(n - 2);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fibon1(n);
	printf("ret=%d", ret);
	return 0;
}