@interface AppReferenceResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAppReference:(long long)a0;
+ (id)confirmationRequiredWithAppReferenceToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
