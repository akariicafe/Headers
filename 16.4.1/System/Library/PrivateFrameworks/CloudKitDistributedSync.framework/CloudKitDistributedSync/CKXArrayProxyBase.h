@interface CKXArrayProxyBase : CKXProxyBase

@property (readonly, nonatomic) struct { unsigned long long structToken; unsigned long long listReferenceToken; unsigned long long page; unsigned long long offset; } listInstance;

- (void)reset;
- (void)associateWithListInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;

@end
