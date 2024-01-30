@class NSSet;

@interface HealthExperience.FavoritesProvider : NSObject <WDFavoriteDisplayTypesControllerObserver, HealthPlatform.FavoritesProviding> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ favoriteDisplayTypesController;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ nonspecificUpdatesDisabled;
}

@property (nonatomic, readonly) NSSet *favorites;
@property (nonatomic, readonly) BOOL isReady;
@property (nonatomic, readonly) BOOL isCycleTrackingFavorited;

- (void)favoriteDisplayTypesControllerReady:(id)a0;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (BOOL)isFavoriteWithObject:(id)a0;
- (void)favoritesChangedRemotely:(id)a0;

@end
