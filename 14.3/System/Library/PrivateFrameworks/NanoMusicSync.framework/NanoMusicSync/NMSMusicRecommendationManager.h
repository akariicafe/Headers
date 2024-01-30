@class NSArray, NSSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface NMSMusicRecommendationManager : NSObject {
    NSArray *_recommendations;
    BOOL _loadingContents;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_libraryRecommendationExpirationTimer;
    NSObject<OS_dispatch_source> *_storeRecommendationExpirationTimer;
    NSObject<OS_dispatch_source> *_storeRecommendationRetryTimer;
    unsigned long long _storeRecommendationRetryAttempt;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    unsigned long long _artworkRetryAttempt;
    NSSet *_artworkRetryPlaylists;
    NSObject<OS_dispatch_group> *_initialRecommendationsFetchGroup;
    BOOL _hasFetchedInitialRecommendations;
}

@property (nonatomic) BOOL wantsContentsUpdate;

+ (id)sharedManager;

- (void)_invalidateStoreRecommendationExpirationTimer;
- (void)_notifyMusicRecommendationsDidUpdateNotification;
- (void)_handleRecommendationStoreContentsDidChangeNotification:(id)a0;
- (id)init;
- (BOOL)_isLibraryRecommendationExpired;
- (void)_reloadRecommendationContentsIfNecessary;
- (void).cxx_destruct;
- (id)_sortedContainersBasedOnRecency;
- (void)fetchRecommendationsWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)nms_fetchRecentMusicRecommendationWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)persistRecommendationsSelections:(id)a0;
- (void)_startStoreRecommendationRetryTimer;
- (void)_invalidateRecommendationRetryTimer;
- (void)_reloadStoreRecommendations;
- (void)_retryFailedArtworkImportsIfNecessary;
- (void)_handlePairingFinishedNotification:(id)a0;
- (void)_scheduleNextLibraryRecommendationReloadIfNecessary;
- (void)_invalidateLibraryRecommendationExpirationTimer;
- (void)dealloc;
- (id)_fetchAddedDateForContainer:(id)a0;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)a0;
- (id)_recommendations;
- (void)nms_fetchSelectedRecommendationSectionTypesForModelObject:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_updateWithRecommendations:(id)a0;
- (void)_finishLoadingContentsWithResponse:(id)a0;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)a0;
- (void)_reloadLibraryRecommendations;
- (void)_importArtworkForPlaylists:(id)a0;
- (void)_scheduleNextStoreRecommendationReloadIfNecessary;
- (id)_expirationDateForUpdateDate:(id)a0 withOffsetDays:(long long)a1 preferredTimeWindow:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_persistUpdatedRecommendationsWithResponse:(id)a0;
- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)a0;
- (void)nms_deselectRecommendationIfNecessaryForModelObject:(id)a0;
- (void)_handleActiveAccountDidChangeNotification:(id)a0;
- (BOOL)_updateRecommendationsSelections;
- (void)_startArtworkRetryTimer;
- (void)_removePreviousRecommendationDefaults;
- (void)_setArtworkImageCache:(id)a0 withToken:(id)a1;
- (void)_reloadRecommendationsFromDefaultsWithCompletion:(id /* block */)a0;
- (void)_handleRecommendationSelectionsDidChangeNotification:(id)a0;
- (void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(BOOL)a0;
- (void)_removeLegacyRecommendationsDefaultsIfNecessary;
- (void)_registerForPairingFinishedNotification;
- (BOOL)_isStoreRecommendationExpired;
- (void)_unregisterForPairingFinishedNotification;
- (BOOL)hasSelectedRecommendationWithIdentifier:(id)a0;
- (void)_deleteCachedArtworksWithTokens:(id)a0;
- (void)_handleArtworksDidUpdateNotification:(id)a0;
- (void)_invalidateArtworkRetryTimer;

@end
