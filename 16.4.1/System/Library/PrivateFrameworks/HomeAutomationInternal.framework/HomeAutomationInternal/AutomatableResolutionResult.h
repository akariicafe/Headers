@interface AutomatableResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)successWithResolvedAutomatable:(id)a0;
+ (id)confirmationRequiredWithAutomatableToConfirm:(id)a0;
+ (id)disambiguationWithAutomatablesToDisambiguate:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
