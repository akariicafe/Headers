@class NSString, NSDictionary;

@interface NETunnelProviderProtocol : NEVPNProtocol

@property (readonly) NSString *pluginType;
@property (copy) NSString *designatedRequirement;
@property (copy) NSString *authenticationPluginType;
@property (copy) NSDictionary *vendorInfo;
@property long long authenticationMethod;
@property int reassertTimeout;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSString *providerBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isLegacyPluginType:(id)a0;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (struct __SCNetworkInterface { } *)createInterface;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPluginType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPluginType:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)copyPasswordsFromKeychainInDomain:(long long)a0;
- (void)initFromLegacyDictionaryExtra:(id)a0;
- (id)copyLegacyDictionary;

@end
