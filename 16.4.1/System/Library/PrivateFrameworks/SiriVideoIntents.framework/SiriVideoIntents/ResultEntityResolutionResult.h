@interface ResultEntityResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithResultEntityToConfirm:(id)a0;
+ (id)disambiguationWithResultEntitysToDisambiguate:(id)a0;
+ (id)successWithResolvedResultEntity:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
