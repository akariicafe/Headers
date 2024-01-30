@interface INRestaurantResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedRestaurant:(id)a0;
+ (id)disambiguationWithRestaurantsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithRestaurantToConfirm:(id)a0;

@end
