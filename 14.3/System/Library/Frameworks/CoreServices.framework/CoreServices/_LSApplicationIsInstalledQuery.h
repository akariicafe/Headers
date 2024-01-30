@class NSString;

@interface _LSApplicationIsInstalledQuery : _LSQuery

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)queryWithBundleIdentifier:(id)a0;
+ (BOOL)supportsSecureCoding;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
