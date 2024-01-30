@interface DiscoveryTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedDiscoveryType:(long long)a0;
+ (id)confirmationRequiredWithDiscoveryTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
