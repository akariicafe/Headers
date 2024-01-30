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
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)_handleFetchError:(id)a0;
- (void)_handleFetchSuccess:(id)a0;
- (BOOL)cycleTrackingSummaryIsFavorited;
- (id)favoritedDisplayTypes;
- (void)fetchFavorites;
- (id)initWithWDUserDefaults:(id)a0 healthStore:(id)a1 shouldPersistChanges:(BOOL)a2;
- (void)userHasUpdatedFavortiesWithCompletion:(id /* block */)a0;
- (void)_alertObserversControllerReady;
- (void)_alertObserversDidFail;
- (void)_alertObserversDidSuccessfullyPersist;
- (void)_alertObserversDidUpdate;
- (id)_displayTypeIdentifiersFromDisplayTypes:(id)a0;
- (void)_fetchUserDefaultsIfNecessary;
- (BOOL)_needsFetch;
- (void)_persistFavoritedDisplayTypes;
- (void)_recoverFromFailureStateIfNecessary;
- (BOOL)displayTypeIsFavorited:(id)a0;
- (void)removeAllFavorites;
- (void)setCycleTrackingSummaryFavorited:(BOOL)a0;
- (void)setIsFavorited:(BOOL)a0 displayType:(id)a1;
- (void)setIsFavorited:(BOOL)a0 displayTypes:(id)a1;
- (void)userUpdatedFavorites;

@end
