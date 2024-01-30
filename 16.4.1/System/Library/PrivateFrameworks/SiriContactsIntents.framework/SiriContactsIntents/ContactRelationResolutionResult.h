@interface ContactRelationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithContactRelationToConfirm:(id)a0;
+ (id)disambiguationWithContactRelationsToDisambiguate:(id)a0;
+ (id)successWithResolvedContactRelation:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
