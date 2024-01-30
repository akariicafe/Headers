@interface SiriMatchResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithSiriMatchToConfirm:(id)a0;
+ (id)disambiguationWithSiriMatchsToDisambiguate:(id)a0;
+ (id)successWithResolvedSiriMatch:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
