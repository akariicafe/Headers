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

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)setIsFavorited:(BOOL)a0 displayType:(id)a1;
- (void)userUpdatedFavorites;
- (BOOL)cycleTrackingSummaryIsFavorited;
- (void)setCycleTrackingSummaryFavorited:(BOOL)a0;
- (BOOL)displayTypeIsFavorited:(id)a0;
- (BOOL)_needsFetch;
- (void)_handleFetchSuccess:(id)a0;
- (void)_handleFetchError:(id)a0;
- (id)favoritedDisplayTypes;
- (id)initWithWDUserDefaults:(id)a0 healthStore:(id)a1 shouldPersistChanges:(BOOL)a2;
- (void)setIsFavorited:(BOOL)a0 displayTypes:(id)a1;
- (void)fetchFavorites;
- (void)userHasUpdatedFavortiesWithCompletion:(id /* block */)a0;
- (void)_fetchUserDefaultsIfNecessary;
- (void)_recoverFromFailureStateIfNecessary;
- (void)_persistFavoritedDisplayTypes;
- (void)_alertObserversDidUpdate;
- (void)_alertObserversDidFail;
- (void)_reportFavoritedDisplayTypes;
- (void)_alertObserversControllerReady;
- (id)_displayTypeIdentifiersFromDisplayTypes:(id)a0;
- (void)_alertObserversDidSuccessfullyPersist;
- (void)removeAllFavorites;

@end
