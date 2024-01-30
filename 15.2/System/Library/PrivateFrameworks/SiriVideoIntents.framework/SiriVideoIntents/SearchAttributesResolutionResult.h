@interface SearchAttributesResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedSearchAttributes:(id)a0;
+ (id)disambiguationWithSearchAttributessToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithSearchAttributesToConfirm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
