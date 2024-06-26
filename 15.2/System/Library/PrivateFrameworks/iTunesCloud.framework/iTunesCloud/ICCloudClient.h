@class NSXPCConnection, ICCloudClientAvailabilityService, NSString, NSMutableArray, ICCloudClientCloudService, ICConnectionConfiguration, ICCloudServerListenerEndpointProvider, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudClient : NSObject <ICCloudAvailability>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialAccessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverSetupBlockQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) ICCloudClientAvailabilityService *availabilityService;
@property (readonly, nonatomic) ICCloudClientCloudService *cloudService;
@property (readonly, nonatomic) ICCloudServerListenerEndpointProvider *listenerEndpointProvider;
@property (retain, nonatomic) NSMutableArray *pendingServerSetupCompleteBlocks;
@property (nonatomic) BOOL serverIsSetup;
@property (readonly, nonatomic) ICConnectionConfiguration *configuration;
@property (copy, nonatomic) id /* block */ updateSagaInProgressChangedHandler;
@property (copy, nonatomic) id /* block */ updateJaliscoInProgressChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasSetPreferenceForAutomaticDownloads;
- (void)hideItemsWithPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadCloudPlaylistProperties;
- (void)_tearDownNotifications;
- (void)addItemWithSagaID:(long long)a0 toPlaylistWithPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)becomeActive;
- (void)_setupNotifications;
- (void)setItemProperties:(id)a0 forSagaID:(unsigned long long)a1;
- (void)addStorePlaylistWithGlobalID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sdk_addStoreItemWithOpaqueID:(id)a0 toPlaylistWithPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)disableCloudLibraryWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (void)addGeniusPlaylistWithPersistentID:(long long)a0 name:(id)a1 seedItemSagaIDs:(id)a2 itemSagaIDs:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (void)sdk_createPlaylistWithPersistentID:(long long)a0 properties:(id)a1 tracklist:(id)a2 completionHandler:(id /* block */)a3;
- (void)setCloudAddToPlaylistBehavior:(long long)a0 completionHandler:(id /* block */)a1;
- (void)uploadCloudItemProperties;
- (BOOL)isAuthenticated;
- (void)removePlaylistsWithSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id /* block */)a0;
- (BOOL)createMusicNotificationFromAMSDialogRequest:(id)a0 error:(id *)a1;
- (void)removeItemsWithSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)createPlaylistWithPersistentID:(long long)a0 properties:(id)a1 trackList:(id)a2 completionHandler:(id /* block */)a3;
- (void)resignActive;
- (id)initWithUserIdentity:(id)a0;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)publishPlaylistWithSagaID:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(id /* block */)a0;
- (BOOL)isCellularDataRestrictedForVideos;
- (void)updateJaliscoLibraryWithCompletionHandler:(id /* block */)a0;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (void)importScreenshotForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestricted;
- (void)setPlaylistProperties:(id)a0 trackList:(id)a1 forPlaylistPersistentID:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)a0 ignoreMinRefreshInterval:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)a0;
- (void)updateArtistHeroImages;
- (void)deauthenticateWithCompletionHandler:(id /* block */)a0;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)addStoreItemWithAdamID:(long long)a0 referral:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateSagaLibraryWithCompletionHandler:(id /* block */)a0;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshEnhancedAudioSharedKeys;
- (void)enableCloudLibraryWithPolicy:(long long)a0 startInitialImport:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)importItemArtworkForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isAutomaticDownloadsEnabledForMediaKindMusic;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)a0;
- (void)setDaemonConfiguration:(unsigned long long)a0;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)a0;
- (void)loadJaliscoUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadIsSagaUpdateInProgressWithCompletionHandler:(id /* block */)a0;
- (void)_serverSetupDidComplete;
- (void)loadArtworkInfoForContainerSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableJaliscoGeniusWithCompletionHandler:(id /* block */)a0;
- (void)setAlbumProperties:(id)a0 forAlbumPersistentID:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id /* block */)a0;
- (void)loadScreenshotInfoForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0;
- (void)loadBooksForStoreIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)handleAutomaticDownloadPreferenceChangedForMediaKindMusic:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)a0;
- (void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchEnhancedAudioOfflineKeys;
- (void)loadArtworkInfoForSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSagaLibraryWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)a0;
- (void)setItemProperties:(id)a0 forPurchaseHistoryID:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeJaliscoLibraryWithCompletionHander:(id /* block */)a0;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(id /* block */)a0;
- (void)updatePinnedSubscribedPlaylistsWithCompletion:(id /* block */)a0;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)a0;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)a0;
- (id)init;
- (void)updateJaliscoLibraryWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void)addStoreItemWithAdamID:(long long)a0 referral:(id)a1 toPlaylistWithPersistentID:(long long)a2 completionHandler:(id /* block */)a3;
- (void)loadArtworkInfoForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)uploadItemProperties;
- (void)loadArtworkInfoForContainerSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)authenticateAndStartInitialImport:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)loadSagaUpdateProgressWithCompletionHandler:(id /* block */)a0;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)sdk_addStoreItemWithOpaqueID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_serverJaliscoUpdateInProgressDidChange;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)disableJaliscoGeniusWithCompletionHandler:(id /* block */)a0;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id /* block */)a0;
- (void)loadScreenshotInfoForSagaIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_enableCloudLibraryWithPolicy:(long long)a0 startinitialImport:(BOOL)a1 isExplicitUserAction:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)importSubscriptionScreenshotForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)a0;
- (void)setJaliscoGeniusCUID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)importContainerArtworkForSagaID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_serverSagaUpdateInProgressDidChange;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)a0;
- (BOOL)_isAuthenticated;
- (void)isAuthenticatedWithCompletionHandler:(id /* block */)a0;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)a0;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(id /* block */)a0;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)isMediaKindDisabledForJaliscoLibrary:(long long)a0;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)resetConfiguration:(id)a0;
- (void)importArtistHeroImageForPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)performBlockAfterServerSetup:(id /* block */)a0;
- (void)listCloudServerOperations;
- (void)isAuthenticatedWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(id /* block */)a0;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id /* block */)a0;
- (void)loadMissingArtwork;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)a0;

@end
