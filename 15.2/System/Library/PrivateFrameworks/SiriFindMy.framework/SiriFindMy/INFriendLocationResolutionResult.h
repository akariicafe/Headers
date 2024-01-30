@interface INFriendLocationResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedINFriendLocation:(id)a0;
+ (id)disambiguationWithINFriendLocationsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithINFriendLocationToConfirm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
