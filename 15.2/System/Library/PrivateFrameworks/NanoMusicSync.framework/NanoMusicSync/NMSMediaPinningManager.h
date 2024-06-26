@class NSObject, NSString, NSArray, NSOrderedSet, NMSPodcastsDownloadableContentController, NMSMediaSyncInfo, NMSMediaDownloadInfo, NMSyncDefaults, NMSMediaQuotaManager, NSNumber, NMSPodcastSizeCache;
@protocol OS_dispatch_queue;

@interface NMSMediaPinningManager : NSObject <ICEnvironmentMonitorObserver, NMSPodcastsDownloadableContentControllerDelegate, MTDBExtensionAccessObserver> {
    NMSyncDefaults *_sharedDefaults;
    NMSPodcastSizeCache *_podcastSizeCache;
    NMSMediaSyncInfo *_podcastStationsSyncInfo;
    NMSPodcastsDownloadableContentController *_podcastsDownloadableContentObserver;
    NMSMediaQuotaManager *_addedItemsQuotaManager;
    NMSMediaQuotaManager *_downloadedItemsQuotaManager;
    unsigned long long _mediaQuota;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSArray *_cachedPlaylistIdentifiers;
    NSArray *_cachedAlbumIdentifiers;
    NSArray *_cachedPodcastFeedURLs;
    NSArray *_cachedPodcastStationUUIDs;
    BOOL _cachedSavedEpisodesEnabled;
    BOOL _cachedPinnedPodcastsAreUserSet;
    NSArray *_cachedAudiobookIdentifiers;
    BOOL _pinnedPlaylistsValidated;
    BOOL _workoutPlaylistValidated;
}

@property (readonly, nonatomic) NMSMediaDownloadInfo *downloadInfo;
@property (readonly, nonatomic) NSArray *playlistIdentifiers;
@property (readonly, nonatomic) NSArray *albumIdentifiers;
@property (readonly, nonatomic) NSArray *pinnedPlaylists;
@property (readonly, nonatomic) NSArray *pinnedAlbums;
@property (retain, nonatomic) NSNumber *workoutPlaylistID;
@property (readonly, nonatomic) NSArray *podcastFeedURLs;
@property (readonly, nonatomic) NSArray *podcastStationUUIDs;
@property (nonatomic) BOOL pinnedPodcastsAreUserSet;
@property (nonatomic) BOOL savedEpisodesEnabled;
@property (readonly, nonatomic) NSArray *audiobookIdentifiers;
@property (nonatomic, getter=isWantToReadEnabled) BOOL wantToReadEnabled;
@property (retain, nonatomic) NSOrderedSet *wantToReadAudiobooks;
@property (nonatomic, getter=isReadingNowEnabled) BOOL readingNowEnabled;
@property (retain, nonatomic) NSOrderedSet *readingNowAudiobooks;
@property (readonly, nonatomic) NSOrderedSet *pinnedAudiobooks;
@property (nonatomic) double audiobookDownloadLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (unsigned long long)_mediaStorageSizeForCurrentDevice;
+ (id)_cachedAlbumIdentifiersFilePath;
+ (id)_cachedPlaylistIdentifiersFilePath;
+ (BOOL)playlistPIDValidForPinning:(id)a0;
+ (id)_cachedPodcastFeedURLsFilePath;
+ (id)_cachedPodcastStationUUIDsFilePath;
+ (id)_cachedAudiobookIdentifiersFilePath;
+ (id)_tokenForInstance:(id)a0;
+ (void)_persistNewClientToken;
+ (id)_fetchMusicRecommendations;
+ (id)_cachedIdentifiersDirectoryPath;

- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)a0;
- (void)setAvailableSpace:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setListenNowPodcastFeedURLs:(id)a0;
- (id)init;
- (void)_handleRecommendationSelectionsDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)a0;
- (BOOL)isItemGroupWithinQuota:(id)a0;
- (void)_handlePodcastStationsDidChange:(id)a0;
- (void)_handlePodcastsSubscriptionMetadataDidChangeNotification:(id)a0;
- (void)_handlePodcastSizeInfoDidChangeNotification:(id)a0;
- (void)_handlePodcastSizeCacheDidUpdateNotification:(id)a0;
- (BOOL)_shouldCalculateCachedIdentifiers;
- (BOOL)_shouldSkipQuotaManagerEvaluation;
- (void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)a0;
- (void)_handleMusicPinningSelectionsDidChangeNotification:(id)a0;
- (void)_handleRecommendationLibraryContentsDidChangeNotification:(id)a0;
- (void)_handleRecommendationsDidUpdateNotification:(id)a0;
- (void)_handleAudiobooksPinningSelectionsDidChangeNotification:(id)a0;
- (void)_handleAudiobooksRecommendationsDidChangeNotification:(id)a0;
- (void)_handleICAgeVerificationStateDidChangeNotification:(id)a0;
- (void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningManagerMusicIdentifiersDidChangeNotification:(id)a0;
- (void)_handleMediaPinningManagerPodcastsIdentifiersDidChangeNotification:(id)a0;
- (void)_handleMediaPinningManagerAudiobooksIdentifiersDidChangeNotification:(id)a0;
- (unsigned long long)_mediaQuota;
- (void)_invalidateAddedItemsCache;
- (id)_quotaManagerWithDownloadedItemsOnly:(BOOL)a0;
- (void)_invalidateMediaCacheForAppIdentifiers:(unsigned long long)a0;
- (void)_refreshMusicIdentifiers;
- (void)_fetchMusicIdentifiers;
- (BOOL)_isAlbumPinned:(id)a0;
- (BOOL)_isPlaylistPinned:(id)a0;
- (void)_setWorkoutPlaylistID:(id)a0;
- (void)_updateWorkoutSettingsPlaylistPIDTo:(id)a0;
- (void)_refreshPodcastsIdentifiers;
- (void)_fetchPodcastsIdentifiers;
- (void)_refreshAudiobooksIdentifiers;
- (void)_fetchAudiobooksIdentifiers;
- (BOOL)_isAudiobookPinned:(id)a0;
- (double)_audiobookDownloadLimit;
- (void)_notePinningSettingsChangedLocally;
- (unsigned long long)episodeLimitForPodcastsAreUserSet:(BOOL)a0;
- (id)_legacy_newPodcastsGroupIteratorWithDownloadedItemsOnly:(BOOL)a0;
- (id)_newMusicGroupIteratorWithDownloadedItemsOnly:(BOOL)a0;
- (id)_newPodcastsGroupIteratorWithDownloadedItemsOnly:(BOOL)a0;
- (id)_newAudiobooksGroupIteratorWithDownloadedItemsOnly:(BOOL)a0;
- (BOOL)_isAppDownloadingDormantForBundleIdentifier:(id)a0;
- (id)_newGroupIteratorForBundleIdentifier:(id)a0 downloadedItemsOnly:(BOOL)a1;
- (void)invalidatePodcastsCache;
- (void)podcastsDownloadableContentControllerContentDidChange:(id)a0;
- (void)extensionAccessDidChange;
- (id)downloadInfoWithinAvailableSpace:(unsigned long long)a0;
- (id)downloadInfoForBundleIdentifier:(id)a0;
- (void)invalidateMusicCache;
- (unsigned long long)addedSongsSize;
- (unsigned long long)nominatedSongsSize;
- (BOOL)isAlbumPinned:(id)a0;
- (BOOL)isPlaylistPinned:(id)a0;
- (void)pinAlbum:(id)a0 completionHandler:(id /* block */)a1;
- (void)pinPlaylist:(id)a0 completionHandler:(id /* block */)a1;
- (void)unpinAlbum:(id)a0 completionHandler:(id /* block */)a1;
- (void)unpinPlaylist:(id)a0 completionHandler:(id /* block */)a1;
- (void)setGizmoDownloadOrder:(unsigned long long)a0 forPodcastWithFeedURL:(id)a1;
- (void)removePodcastWithFeedURL:(id)a0;
- (unsigned long long)downloadOrderForPodcastWithFeedURL:(id)a0;
- (void)setGizmoEpisodeLimit:(unsigned long long)a0 forPodcastWithFeedURL:(id)a1;
- (unsigned long long)episodeLimitForPodcastWithFeedURL:(id)a0;
- (void)pinPodcastWithFeedURL:(id)a0;
- (void)unpinPodcastWithFeedURL:(id)a0;
- (BOOL)isPodcastWithFeedURLPinned:(id)a0;
- (void)pinPodcastStationWithUUID:(id)a0;
- (void)unpinPodcastStationWithUUID:(id)a0;
- (BOOL)isPodcastStationWithUUIDPinned:(id)a0;
- (void)invalidateAudiobooksCache;
- (BOOL)isAudiobookPinned:(id)a0;
- (void)pinAudiobook:(id)a0;
- (void)unpinAudiobook:(id)a0;
- (BOOL)_requiresICEnvironmentMonitor;
- (id)addedPodcastsDownloadInfoItemsWithFeedURL:(id)a0;
- (BOOL)nms_modelObjectIsManuallyPinned:(id)a0;
- (void)_pinModelObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unpinModelObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)nms_fetchPinningStatusForModelObject:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)nms_pinModelObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)nms_unpinModelObject:(id)a0 completionHandler:(id /* block */)a1;

@end
