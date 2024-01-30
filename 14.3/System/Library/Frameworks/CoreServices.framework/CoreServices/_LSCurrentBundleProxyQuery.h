@interface _LSCurrentBundleProxyQuery : _LSBundleQuery

@property (class, readonly) double cacheInterval;

+ (id)currentBundleProxyQuery;
+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
