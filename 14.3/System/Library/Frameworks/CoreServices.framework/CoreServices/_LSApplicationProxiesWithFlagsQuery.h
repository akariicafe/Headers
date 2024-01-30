@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned int plistFlags;
@property (readonly, nonatomic) unsigned long long bundleFlags;

+ (id)queryWithPlistFlags:(unsigned int)a0 bundleFlags:(unsigned long long)a1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
