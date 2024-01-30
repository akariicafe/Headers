@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject

@property (readonly, nonatomic) HMFNetAddress *addressStart;
@property (readonly, nonatomic) HMFNetAddress *addressEnd;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)prettyJSONDictionary;
- (id)initWithAddressStart:(id)a0 addressEnd:(id)a1;

@end
