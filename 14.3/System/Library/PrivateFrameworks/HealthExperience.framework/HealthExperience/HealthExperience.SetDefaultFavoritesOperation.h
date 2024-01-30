@interface HealthExperience.SetDefaultFavoritesOperation : HealthExperience.AsynchronousOperation <HealthPlatform.FavoritesProviderObserver> {
    void /* unknown type, empty encoding */ favoritesProvider;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ precondition;
    void /* unknown type, empty encoding */ timeout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultFavoritablesProvider;
    void /* unknown type, empty encoding */ timeoutWork;
}

- (void)favoritesProviderIsReady:(id)a0;
- (void)favoritesProviderDidUpdate:(id)a0;
- (void)favoritesProviderDidUpdate:(id)a0 specificType:(id)a1 isFavorited:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)main;

@end
