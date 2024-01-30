@interface AppNounResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAppNoun:(long long)a0;
+ (id)confirmationRequiredWithAppNounToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
