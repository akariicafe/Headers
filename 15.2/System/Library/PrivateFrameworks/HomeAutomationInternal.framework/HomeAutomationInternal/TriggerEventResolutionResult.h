@interface TriggerEventResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedTriggerEvent:(long long)a0;
+ (id)confirmationRequiredWithTriggerEventToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
