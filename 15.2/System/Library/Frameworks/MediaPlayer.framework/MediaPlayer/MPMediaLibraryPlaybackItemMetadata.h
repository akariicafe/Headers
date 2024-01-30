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

- (id)protectedContentSupportStorageURL;
- (id)artistName;
- (id)albumArtistName;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)a0 returningAssetQuality:(unsigned long long *)a1 protectionType:(unsigned long long *)a2 usesPurchaseBundle:(BOOL *)a3;
- (id)composerName;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (BOOL)isExplicitTrack;
- (id)contentTitle;
- (unsigned long long)storeSagaID;
- (id)albumTitle;
- (BOOL)showComposer;
- (long long)albumStoreAdamID;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (id)buyParameters;
- (float)volumeNormalization;
- (long long)storeAdamID;
- (long long)downloadIdentifier;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (id)_mediaItemValuesForProperties;
- (id)initWithMediaItem:(id)a0;
- (BOOL)prefersStoreContentInfo;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)a0 protectionType:(unsigned long long *)a1 usesPurchaseBundle:(BOOL *)a2;
- (BOOL)isOfflineHLS;
- (id)hlsPlaylistURLString;
- (id)hlsOfflinePlaybackKeys;
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
- (void)_persistURI:(id)a0 persistentContentKey:(id)a1;
- (void)_invalidateMediaItemProperties;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)a0 assetFlavor:(id)a1 protectionType:(unsigned long long)a2 pathExtension:(id)a3;
- (id)_onqueue_mediaItemValuesForProperties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long)artistStoreAdamID;
- (id)copyrightText;
- (double)expectedDuration;
- (unsigned long long)hash;
- (void)dealloc;
- (long long)endpointType;
- (double)bookmarkTime;
- (unsigned long long)storeAccountID;
- (id)modelGenericObject;

@end
