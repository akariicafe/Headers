@class NSString, HMDHome, NSDate, HMDNetworkRouterFirewallRuleManager;

@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject <HMDNetworkRouterFirewallRuleManagerClient> {
    HMDHome *_home;
    HMDNetworkRouterFirewallRuleManager *_firewallRuleManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_expires;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helperForHome:(id)a0;

@end
