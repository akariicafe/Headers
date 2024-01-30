@interface EventStatusResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedEventStatus:(long long)a0;
+ (id)confirmationRequiredWithEventStatusToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
