@protocol HMDNetworkRouterFirewallRuleManagerClient;

@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject

@property (weak, nonatomic) id<HMDNetworkRouterFirewallRuleManagerClient> client;
@property (copy, nonatomic) id /* block */ startupCompletion;

- (void).cxx_destruct;

@end
