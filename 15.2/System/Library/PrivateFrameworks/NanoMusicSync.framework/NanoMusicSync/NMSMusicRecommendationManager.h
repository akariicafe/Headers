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

- (void)_reloadStoreRecommendations;
- (void)_scheduleNextStoreRecommendationReloadIfNecessary;
- (void)_removePreviousRecommendationDefaults;
- (void)_finishLoadingContentsWithResponse:(id)a0;
- (void)_reloadRecommendationContentsIfNecessary;
- (void)nms_fetchSelectedRecommendationSectionTypesForModelObject:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasSelectedRecommendationWithIdentifier:(id)a0;
- (void)_startArtworkRetryTimer;
- (void)nms_deselectRecommendationIfNecessaryForModelObject:(id)a0;
- (void)_removePreviousCachedRecommendationsResponses;
- (void)_setArtworkImageCache:(id)a0 withToken:(id)a1;
- (void)_invalidateLibraryRecommendationExpirationTimer;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)a0;
- (id)_sortedContainersBasedOnRecency;
- (void)_invalidateRecommendationRetryTimer;
- (id)_recommendations;
- (BOOL)_updateWithRecommendations:(id)a0;
- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)a0;
- (void)_importArtworkForPlaylists:(id)a0;
- (BOOL)_updateRecommendationsSelections;
- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(BOOL)a0;
- (BOOL)_isLibraryRecommendationExpired;
- (id)_expirationDateForUpdateDate:(id)a0 withOffsetDays:(long long)a1 preferredTimeWindow:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_handleRecommendationStoreContentsDidChangeNotification:(id)a0;
- (void)_removeLegacyRecommendationsDefaultsIfNecessary;
- (id)_fetchAddedDateForContainer:(id)a0;
- (BOOL)_isStoreRecommendationExpired;
- (void).cxx_destruct;
- (void)nms_fetchRecentMusicRecommendationWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)_handleRecommendationSelectionsDidChangeNotification:(id)a0;
- (void)_startStoreRecommendationRetryTimer;
- (void)_unregisterForPairingFinishedNotification;
- (void)_deleteCachedArtworksWithTokens:(id)a0;
- (void)_reloadLibraryRecommendations;
- (void)_reloadRecommendationsFromDefaultsWithCompletion:(id /* block */)a0;
- (void)_notifyMusicRecommendationsDidUpdateNotification;
- (void)_handleArtworksDidUpdateNotification:(id)a0;
- (void)_invalidateStoreRecommendationExpirationTimer;
- (void)_handleActiveAccountDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_handlePairingFinishedNotification:(id)a0;
- (void)fetchRecommendationsWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)_registerForPairingFinishedNotification;
- (void)_persistUpdatedRecommendationsWithResponse:(id)a0;
- (void)_retryFailedArtworkImportsIfNecessary;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)a0;
- (void)_scheduleNextLibraryRecommendationReloadIfNecessary;
- (void)persistRecommendationsSelections:(id)a0;
- (void)_invalidateArtworkRetryTimer;

@end
