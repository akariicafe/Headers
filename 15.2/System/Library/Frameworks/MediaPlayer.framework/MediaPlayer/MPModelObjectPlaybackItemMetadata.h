@class MPModelFileAsset, NSObject, MPModelHomeSharingAsset, MPModelStoreAsset, MPModelPlaybackPosition;
@protocol OS_dispatch_queue, MPModelObjectPlaybackItemMetadataDelegate;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (readonly, nonatomic) MPModelFileAsset *localFileAsset;
@property (readonly, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (readonly, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (readonly, nonatomic) MPModelStoreAsset *storeAsset;
@property (weak, nonatomic) id<MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate;

+ (BOOL)_shouldRespectMusicCellularDataSetting;
+ (id)requiredProperties;
+ (id)requiredHomeSharingAssetProperties;
+ (id)requiredLocalFileAssetProperties;
+ (id)requiredPlaybackPositionProperties;
+ (id)requiredStoreAssetProperties;

- (id)protectedContentSupportStorageURL;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)a0 returningAssetQuality:(unsigned long long *)a1 protectionType:(unsigned long long *)a2 usesPurchaseBundle:(BOOL *)a3;
- (BOOL)allowsAssetCaching;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)a0;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)buyParameters;
- (long long)downloadIdentifier;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)a0 protectionType:(unsigned long long *)a1 usesPurchaseBundle:(BOOL *)a2;
- (BOOL)isSubscriptionRequired;
- (id)iTunesStoreContentID;
- (id)iTunesStoreContentDSID;
- (id)localNetworkContentURL;
- (long long)mediaLibraryPersistentID;
- (BOOL)shouldRememberBookmarkTime;
- (void)setCachedLocalPlaybackAssetFilePath:(id)a0 protectionType:(unsigned long long)a1 assetQuality:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldReportPlayEventsToStore;
- (id)storeUbiquitousIdentifier;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)a0 assetFlavor:(id)a1 protectionType:(unsigned long long)a2 pathExtension:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)endpointType;
- (double)bookmarkTime;
- (unsigned long long)storeAccountID;

@end
