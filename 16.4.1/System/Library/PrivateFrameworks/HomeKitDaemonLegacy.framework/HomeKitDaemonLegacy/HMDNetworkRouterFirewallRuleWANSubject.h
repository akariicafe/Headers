@class NSArray, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject

@property (readonly, nonatomic) NSArray *hostnames;
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithHostnames:(id)a0 addresses:(id)a1 addressRange:(id)a2;
- (id)prettyJSONDictionary;

@end
