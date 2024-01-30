@interface HealthExperience.HasNoFavoritesPrecondition : _TtCs12_SwiftObject <HealthPlatform.FavoritesProviderObserver> {
    void /* unknown type, empty encoding */ favoritesProvider;
    void /* unknown type, empty encoding */ preconditionCompletion;
}

- (void)favoritesProviderIsReady:(id)a0;
- (void)favoritesProviderDidUpdate:(id)a0;
- (void)favoritesProviderDidUpdate:(id)a0 specificType:(id)a1 isFavorited:(BOOL)a2;

@end
