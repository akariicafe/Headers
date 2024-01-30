@interface QualifierResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithQualifierToConfirm:(long long)a0;
+ (id)successWithResolvedQualifier:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
