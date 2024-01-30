@class NSString;

@interface HMDNetworkRouterFirewallRuleLANDynamic : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) unsigned char transportProtocol;
@property (readonly, nonatomic) unsigned char advertisingProtocol;
@property (readonly, nonatomic, getter=isAdvertisingOnly) BOOL advertisingOnly;
@property (readonly, nonatomic) NSString *serviceType;

+ (id)__advertisingProtocolToString:(unsigned char)a0;
+ (BOOL)__decodeAdvertisingProtocol:(id)a0 advertisingProtocol:(unsigned char *)a1 error:(id *)a2;
+ (BOOL)__decodeFlags:(id)a0 advertisingOnly:(BOOL *)a1 error:(id *)a2;
+ (BOOL)__decodeServiceType:(id)a0 serviceType:(id *)a1 error:(id *)a2;
+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 transportProtocol:(unsigned char)a7 advertisingProtocol:(unsigned char)a8 advertisingOnly:(BOOL)a9 serviceType:(id)a10;
- (id)prettyJSONDictionary;

@end
