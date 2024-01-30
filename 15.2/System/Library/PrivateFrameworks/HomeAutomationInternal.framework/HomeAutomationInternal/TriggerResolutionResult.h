@interface TriggerResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedTrigger:(id)a0;
+ (id)disambiguationWithTriggersToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithTriggerToConfirm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
