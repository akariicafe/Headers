@interface HomeSceneTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedHomeSceneType:(long long)a0;
+ (id)confirmationRequiredWithHomeSceneTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
