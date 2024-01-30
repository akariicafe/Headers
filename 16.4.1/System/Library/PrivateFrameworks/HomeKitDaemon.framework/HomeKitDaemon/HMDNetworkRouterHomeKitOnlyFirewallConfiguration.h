@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {
    BOOL _isFiltered;
    BOOL _useFallbackForRTP;
    BOOL _useFallbackForHDS;
}

+ (id)fallbackConfigurationForRuleset:(id)a0;
+ (id)fallbackIdentifier;

- (id)description;
- (id)initWithAccessory:(id)a0 sourceConfiguration:(id)a1;

@end
