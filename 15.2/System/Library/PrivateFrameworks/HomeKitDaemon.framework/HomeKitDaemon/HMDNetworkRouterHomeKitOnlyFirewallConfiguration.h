@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {
    BOOL _isFiltered;
    BOOL _useFallbackForRTP;
    BOOL _useFallbackForHDS;
    BOOL _useFallbackForAirPlay2;
}

+ (id)fallbackConfigurationForRuleset:(id)a0;
+ (id)fallbackIdentifier;
+ (BOOL)isAirplayRule:(id)a0;

- (id)description;
- (id)initWithAccessory:(id)a0 sourceConfiguration:(id)a1;

@end
