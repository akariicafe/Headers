@interface IPPortWrapper : NSObject

@property struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *ipport;

- (id)init;
- (void)dealloc;

@end
