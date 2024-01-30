@class NSString, NSDictionary;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol

@property (copy) NSString *pluginType;
@property (copy) NSString *designatedRequirement;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPluginType:(id)a0;
- (void).cxx_destruct;

@end
