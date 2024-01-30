@class CKXStructProxyChildCache;

@interface CKXStructProxyBase : CKXProxyBase

@property (readonly, nonatomic) struct { unsigned long long structToken; unsigned long long page; unsigned long long offset; } structInstance;
@property (readonly, nonatomic) CKXStructProxyChildCache *childProxyCache;

- (id)_init;
- (void).cxx_destruct;
- (void)reset;
- (id)stringForToken:(unsigned long long)a0;
- (void)associateWithStructInstance:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)copyBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2 forToken:(unsigned long long)a3;
- (id)dataForToken:(unsigned long long)a0;

@end
