@interface _LSApplicationProxiesOfTypeQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;
+ (id)queryWithType:(unsigned long long)a0;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
