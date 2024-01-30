@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) long long index;

- (BOOL)isMutable;
- (long long)count;
- (void)reset;
- (void)appendWithProxyBlock:(id /* block */)a0;

@end
