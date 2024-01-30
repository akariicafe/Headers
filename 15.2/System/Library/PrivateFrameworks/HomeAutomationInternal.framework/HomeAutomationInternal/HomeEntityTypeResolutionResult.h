@interface HomeEntityTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedHomeEntityType:(long long)a0;
+ (id)confirmationRequiredWithHomeEntityTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
