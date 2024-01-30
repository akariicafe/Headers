@interface TriggerTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedTriggerType:(long long)a0;
+ (id)confirmationRequiredWithTriggerTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
