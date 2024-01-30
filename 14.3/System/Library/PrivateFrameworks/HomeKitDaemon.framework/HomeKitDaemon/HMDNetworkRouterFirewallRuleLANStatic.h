@class NSArray, HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANStatic : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) unsigned char transportProtocol;
@property (readonly, nonatomic) HMFNetAddress *ipAddress;
@property (readonly, nonatomic) unsigned short portStart;
@property (readonly, nonatomic) unsigned short portEnd;
@property (readonly, nonatomic) NSArray *icmpTypes;

+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)prettyJSONDictionary;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(BOOL)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(BOOL)a6 transportProtocol:(unsigned char)a7 ipAddress:(id)a8 portStart:(unsigned short)a9 portEnd:(unsigned short)a10 icmpTypes:(id)a11;

@end
