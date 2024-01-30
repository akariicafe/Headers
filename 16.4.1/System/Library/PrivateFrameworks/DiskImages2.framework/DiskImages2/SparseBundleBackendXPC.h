@interface SparseBundleBackendXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isUnlocked;
- (id)initWithCoder:(id)a0;
- (struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })getCryptoHeaderBackend;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1 bandSize:(unsigned long long)a2;
- (id)newWithCryptoFormat:(const void *)a0;
- (void)replaceWithBackendXPC:(id)a0;

@end
