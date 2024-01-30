@interface INFriendResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedINFriend:(id)a0;
+ (id)disambiguationWithINFriendsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithINFriendToConfirm:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
