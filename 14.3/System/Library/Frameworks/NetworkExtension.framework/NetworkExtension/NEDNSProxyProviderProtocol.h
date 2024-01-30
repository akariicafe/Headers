@class NSString, NSDictionary;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol

@property (copy) NSString *pluginType;
@property (copy) NSString *designatedRequirement;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPluginType:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
