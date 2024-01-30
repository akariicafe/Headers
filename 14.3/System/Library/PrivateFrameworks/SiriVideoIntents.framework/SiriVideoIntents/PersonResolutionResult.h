@interface PersonResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedPerson:(id)a0;
+ (id)confirmationRequiredWithPersonToConfirm:(id)a0;
+ (id)disambiguationWithPersonsToDisambiguate:(id)a0;

@end
