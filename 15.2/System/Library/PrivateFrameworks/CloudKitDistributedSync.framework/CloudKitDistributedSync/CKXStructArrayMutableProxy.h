@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) long long index;

- (void)appendObject:(id)a0;
- (BOOL)isMutable;
- (long long)count;
- (void)reset;
- (void)appendProxy:(id)a0;
- (void)appendWithProxyBlock:(id /* block */)a0;

@end
