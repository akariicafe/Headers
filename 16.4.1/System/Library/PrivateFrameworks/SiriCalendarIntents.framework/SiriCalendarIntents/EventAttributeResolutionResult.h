@interface EventAttributeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithEventAttributeToConfirm:(long long)a0;
+ (id)successWithResolvedEventAttribute:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
