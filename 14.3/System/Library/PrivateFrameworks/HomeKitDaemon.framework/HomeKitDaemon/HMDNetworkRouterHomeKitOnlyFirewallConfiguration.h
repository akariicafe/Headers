@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {
    BOOL _isFiltered;
    BOOL _useFallbackForRTP;
    BOOL _useFallbackForHDS;
}

+ (id)fallbackIdentifier;
+ (id)fallbackConfigurationForRuleset:(id)a0;

- (id)description;
- (id)initWithAccessory:(id)a0 sourceConfiguration:(id)a1;

@end
