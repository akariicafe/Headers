@interface IdentityResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithIdentityToConfirm:(id)a0;
+ (id)disambiguationWithIdentitysToDisambiguate:(id)a0;
+ (id)successWithResolvedIdentity:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
