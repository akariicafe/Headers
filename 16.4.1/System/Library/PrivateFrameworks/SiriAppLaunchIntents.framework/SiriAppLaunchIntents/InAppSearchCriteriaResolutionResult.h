@interface InAppSearchCriteriaResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithInAppSearchCriteriaToConfirm:(id)a0;
+ (id)disambiguationWithInAppSearchCriteriasToDisambiguate:(id)a0;
+ (id)successWithResolvedInAppSearchCriteria:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
