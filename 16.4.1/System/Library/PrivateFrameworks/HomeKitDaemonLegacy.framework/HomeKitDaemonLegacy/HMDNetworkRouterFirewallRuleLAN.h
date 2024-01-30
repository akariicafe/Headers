@interface HMDNetworkRouterFirewallRuleLAN : HMDNetworkRouterFirewallRule

@property (readonly, nonatomic) unsigned long long purpose;
@property (readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) BOOL allowInterAccessoryConnections;
@property (readonly, nonatomic) unsigned char direction;
@property (readonly, nonatomic, getter=isRequiredForHAPFunctionality) BOOL requiredForHAPFunctionality;

+ (id)createWithJSONDictionary:(id)a0 error:(id *)a1;
+ (BOOL)__decodeDirection:(id)a0 direction:(unsigned char *)a1 error:(id *)a2;
+ (BOOL)__decodeFlags:(id)a0 critical:(BOOL *)a1 allowInterAccessoryConnections:(BOOL *)a2 requiredForHAPFunctionality:(BOOL *)a3 error:(id *)a4;
+ (BOOL)__decodePurpose:(id)a0 purpose:(unsigned long long *)a1 error:(id *)a2;
+ (BOOL)__decodeTransportProtocolFromJSONDictionary:(id)a0 key:(id)a1 transportProtocol:(unsigned char *)a2 error:(id *)a3;
+ (BOOL)__decodeType:(id)a0 type:(unsigned char *)a1 error:(id *)a2;
+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6;
- (id)prettyJSONDictionary;

@end
