@interface _LSApplicationProxiesOfTypeQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;
+ (id)queryWithType:(unsigned long long)a0;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
