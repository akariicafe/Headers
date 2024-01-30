@class HKObserverSet, HKHealthStore, NSMutableSet, WDUserDefaults;

@interface WDFavoriteDisplayTypesController : NSObject {
    HKObserverSet *_observers;
    NSMutableSet *_favoritedDisplayTypes;
    BOOL _cycleTrackingSummaryFavorited;
    BOOL _shouldPersistChanges;
    long long _state;
    WDUserDefaults *_userDefaults;
}

@property (class, readonly, nonatomic) long long cycleTrackingSummaryFavoritedIdentifier;

@property (nonatomic) BOOL shouldRecoverFromErrors;
@property (readonly, nonatomic) BOOL hasLoadedInitialState;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)registerObserver:(id)a0;
- (void)_handleFetchError:(id)a0;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)_handleFetchSuccess:(id)a0;
- (BOOL)_needsFetch;
- (BOOL)cycleTrackingSummaryIsFavorited;
- (id)favoritedDisplayTypes;
- (void)userHasUpdatedFavortiesWithCompletion:(id /* block */)a0;
- (void)fetchFavorites;
- (id)initWithWDUserDefaults:(id)a0 healthStore:(id)a1 shouldPersistChanges:(BOOL)a2;
- (BOOL)displayTypeIsFavorited:(id)a0;
- (void)setIsFavorited:(BOOL)a0 displayType:(id)a1;
- (void)_fetchUserDefaultsIfNecessary;
- (void)_recoverFromFailureStateIfNecessary;
- (void)_persistFavoritedDisplayTypes;
- (void)_alertObserversDidUpdate;
- (void)_alertObserversDidFail;
- (void)_alertObserversControllerReady;
- (id)_displayTypeIdentifiersFromDisplayTypes:(id)a0;
- (void)_alertObserversDidSuccessfullyPersist;
- (void)setIsFavorited:(BOOL)a0 displayTypes:(id)a1;
- (void)userUpdatedFavorites;
- (void)removeAllFavorites;
- (void)setCycleTrackingSummaryFavorited:(BOOL)a0;

@end
