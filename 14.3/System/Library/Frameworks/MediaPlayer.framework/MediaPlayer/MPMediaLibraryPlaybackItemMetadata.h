@class NSDictionary, MPMediaItem, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasValidMediaItemValuesForProperties;
    BOOL _hasEvaluatedOfflineHLS;
    BOOL _isOfflineHLS;
    MPMediaItem *_mediaItem;
    NSDictionary *_mediaItemValuesForProperties;
    NSDictionary *_playbackKeys;
}

@property (retain, nonatomic, getter=_writeQueue) NSObject<OS_dispatch_queue> *writeQueue;
@property (retain, nonatomic) MPMediaItem *mediaItem;

+ (id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)a0 storeAdamID:(long long)a1 storeSagaID:(unsigned long long)a2 assetQuality:(unsigned long long)a3 assetFlavor:(id)a4 protectionType:(unsigned long long)a5 pathExtension:(id)a6;
+ (id)_highQualityCachedAssetDestinationDirectory;
+ (id)_lowQualityCachedAssetDestinationDirectory;

- (id)albumArtistName;
- (id)buyParameters;
- (long long)endpointType;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)a0 returningAssetQuality:(unsigned long long *)a1 protectionType:(unsigned long long *)a2 usesPurchaseBundle:(BOOL *)a3;
- (id)copyrightText;
- (id)init;
- (unsigned long long)storeAccountID;
- (void).cxx_destruct;
- (id)artistName;
- (long long)downloadIdentifier;
- (void)dealloc;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (id)_mediaItemValuesForProperties;
- (id)initWithMediaItem:(id)a0;
- (BOOL)prefersStoreContentInfo;
- (id)hlsPlaylistURLString;
- (BOOL)isOfflineHLS;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)a0 protectionType:(unsigned long long *)a1 usesPurchaseBundle:(BOOL *)a2;
- (id)hlsOfflinePlaybackKeys;
- (BOOL)isSubscriptionRequired;
- (id)iTunesStoreContentID;
- (id)iTunesStoreContentDSID;
- (id)localNetworkContentURL;
- (long long)mediaLibraryPersistentID;
- (BOOL)shouldReportPlayEventsToStore;
- (float)volumeNormalization;
- (void)setCachedLocalPlaybackAssetFilePath:(id)a0 protectionType:(unsigned long long)a1 assetQuality:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldRememberBookmarkTime;
- (id)storeUbiquitousIdentifier;
- (void)_persistURI:(id)a0 persistentContentKey:(id)a1;
- (void)_invalidateMediaItemProperties;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)a0 assetFlavor:(id)a1 protectionType:(unsigned long long)a2 pathExtension:(id)a3;
- (id)_onqueue_mediaItemValuesForProperties;
- (long long)artistStoreAdamID;
- (unsigned long long)hash;
- (id)composerName;
- (BOOL)isEqual:(id)a0;
- (id)protectedContentSupportStorageURL;
- (double)bookmarkTime;
- (BOOL)isExplicitTrack;
- (long long)storeAdamID;
- (id)modelGenericObject;
- (id)albumTitle;
- (BOOL)showComposer;
- (id)contentTitle;
- (long long)albumStoreAdamID;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (double)expectedDuration;
- (unsigned long long)storeSagaID;

@end
