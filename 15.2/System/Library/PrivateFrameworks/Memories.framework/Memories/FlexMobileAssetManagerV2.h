@class NSString, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FlexMobileAssetManagerV2 : FlexCloudManager {
    NSString *_clientID;
    NSString *_mobileAssetTypeIdentifier;
    NSObject *_downloadThrottleLock;
    NSObject *_mobileAssetCacheLock;
    NSMutableOrderedSet *_pendingDownloadSet;
    NSMutableSet *_processingDownloadSet;
    NSMapTable *_dowloadOptionsMapping;
    NSMutableOrderedSet *_pendingPurgeSet;
    NSMutableSet *_processingPurgeSet;
    int _assetInstalledNotificationToken;
    int _catalogUpdatedNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *triggerDownloadAndPurgeQueue;
@property (nonatomic) BOOL includeArtworkInQueries;
@property (nonatomic) BOOL XMLPresent;

+ (id)assetWithNewestContentVersionInAssets:(id)a0 preferInstalled:(BOOL)a1;
+ (id)_assetURLForMobileAsset:(id)a0;
+ (id)compatibilityFilterPredicate;

- (unsigned long long)assetStatus:(id)a0;
- (void)_purgeAsset:(id)a0;
- (void).cxx_destruct;
- (id)mobileAssetsForAssetPropertyType:(id)a0 songUID:(id)a1;
- (BOOL)_mobileAssetIsPurging:(id)a0;
- (BOOL)_mobileAssetIsDownloading:(id)a0;
- (void)_registerAndHandleSystemMobileAssetNotifications;
- (void)fetchAllSongsWithCompletion:(id /* block */)a0;
- (void)_requeryForMobileAssetTypes:(unsigned long long)a0 forUUIDs:(id)a1;
- (id)_mobileAssetQueryResultStringValue:(long long)a0;
- (id)_metadataMappingForUUIDSet:(id)a0;
- (void)_updateMetadataOnExistingSong:(id)a0 usingAsset:(id)a1 metadataAsset:(id)a2;
- (void)_requeryForMobileAssetTypes:(unsigned long long)a0;
- (id)mobileAssetsForAssetPropertyType:(id)a0;
- (id)_newestContentSetFromAssets:(id)a0 metadataMapping:(id)a1;
- (id)filterByClientIDForAssets:(id)a0 forMetadataMapping:(id)a1;
- (void)_processResults:(id)a0 metadataMapping:(id)a1;
- (id)_mobileAssetDownloadOptionsForClientOptions:(id)a0;
- (id)_mobileAssetDownloadResultStringValue:(long long)a0;
- (long long)_responseForDownloadResult:(long long)a0;
- (void)_updateExistingSong:(id)a0 usingAsset:(id)a1 metadataAsset:(id)a2 forceUpdate:(BOOL)a3;
- (id)_assetIDForMobileAsset:(id)a0;
- (id)_existingSongForUID:(id)a0;
- (void)_updateExistingSong:(id)a0 usingAsset:(id)a1 metadataAsset:(id)a2;
- (void)_loadBundledArtworkForSongID:(id)a0;
- (void)_runNextAsyncAssetDownloadAndPurge;
- (void)_runAsyncAssetDownloadForMobileAsset:(id)a0;
- (void)_dispatchNextAsyncAssetDownloadAndPurge;
- (id)_mobileAssetCancelDownloadResultStringValue:(long long)a0;
- (void)cancelDownloadOfAsset:(id)a0;
- (void)_loadBundledSongForSongID:(id)a0;
- (id)_mobileAssetPurgeResultStringValue:(long long)a0;
- (id)initWithLibrary:(id)a0 options:(id)a1;
- (id)loadCachedSongs;
- (void)loadAssetWithID:(id)a0 forSongID:(id)a1;
- (void)requestDownloadOfAsset:(id)a0 withOptions:(id)a1;
- (void)cancelDownloadOfAllAssets;
- (void)requestPurgeOfAsset:(id)a0;

@end
