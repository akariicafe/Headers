@class NSArray, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject

@property (readonly, nonatomic) NSArray *hostnames;
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)prettyJSONDictionary;
- (id)initWithHostnames:(id)a0 addresses:(id)a1 addressRange:(id)a2;

@end
