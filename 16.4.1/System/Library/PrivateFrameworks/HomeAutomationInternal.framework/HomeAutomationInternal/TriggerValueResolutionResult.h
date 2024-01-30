@interface TriggerValueResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithTriggerValueToConfirm:(id)a0;
+ (id)disambiguationWithTriggerValuesToDisambiguate:(id)a0;
+ (id)successWithResolvedTriggerValue:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
