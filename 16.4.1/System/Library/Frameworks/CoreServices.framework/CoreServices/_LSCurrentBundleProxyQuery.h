@interface _LSCurrentBundleProxyQuery : _LSBundleQuery

@property (class, readonly) double cacheInterval;

+ (BOOL)supportsSecureCoding;
+ (id)currentBundleProxyQuery;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
