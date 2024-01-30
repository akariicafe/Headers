@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) HMFNetAddress *ipAddress;
@property (readonly, nonatomic) unsigned short port;

+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 ipAddress:(id)a7 port:(unsigned short)a8;
- (id)prettyJSONDictionary;

@end
