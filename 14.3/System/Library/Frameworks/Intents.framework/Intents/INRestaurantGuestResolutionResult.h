@interface INRestaurantGuestResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedRestaurantGuest:(id)a0;
+ (id)disambiguationWithRestaurantGuestsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithRestaurantGuestToConfirm:(id)a0;

@end
