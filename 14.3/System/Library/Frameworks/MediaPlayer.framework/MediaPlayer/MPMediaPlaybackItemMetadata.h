@class NSObject, NSString, NSDictionary, NSURL, MPMediaItem, NSNumber, MPModelGenericObject;
@protocol OS_dispatch_queue;

@interface MPMediaPlaybackItemMetadata : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsCellularNetworking;
}

@property (readonly, nonatomic) BOOL prefersStoreContentInfo;
@property (readonly, nonatomic, getter=_rentalIdentifier) NSNumber *rentalIdentifier;
@property (readonly, nonatomic) NSDictionary *hlsOfflinePlaybackKeys;
@property (readonly, nonatomic, getter=isOfflineHLS) BOOL offlineHLS;
@property (readonly, copy, nonatomic) NSString *hlsPlaylistURLString;
@property (readonly, nonatomic) BOOL allowsCellularNetworking;
@property (readonly, nonatomic) BOOL allowsInitiatingPlayWhileDownload;
@property (readonly, copy, nonatomic) NSString *albumArtistName;
@property (readonly, nonatomic) long long albumStoreAdamID;
@property (readonly, copy, nonatomic) NSString *albumTitle;
@property (readonly, nonatomic) BOOL allowsAssetCaching;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, nonatomic) long long artistStoreAdamID;
@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *composerName;
@property (readonly, copy, nonatomic) NSString *contentTitle;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSString *copyrightText;
@property (readonly, nonatomic) long long downloadIdentifier;
@property (readonly, nonatomic) long long endpointType;
@property (readonly, nonatomic) double expectedDuration;
@property (readonly, copy, nonatomic) NSString *genreTitle;
@property (readonly, copy, nonatomic) NSDictionary *additionalHTTPHeaderFields;
@property (readonly, nonatomic) BOOL isExplicitTrack;
@property (readonly, nonatomic) long long likedState;
@property (readonly, copy, nonatomic) NSURL *localNetworkContentURL;
@property (readonly, nonatomic) MPMediaItem *mediaItem;
@property (readonly, nonatomic) long long mediaLibraryPersistentID;
@property (readonly, nonatomic) MPModelGenericObject *modelGenericObject;
@property (readonly, copy, nonatomic) NSURL *protectedContentSupportStorageURL;
@property (readonly, nonatomic) BOOL requiresPlayWhileDownload;
@property (readonly, nonatomic) BOOL showComposer;
@property (readonly, nonatomic) BOOL shouldReportPlayEventsToStore;
@property (readonly, nonatomic) double bookmarkTime;
@property (readonly, nonatomic) BOOL shouldRememberBookmarkTime;
@property (readonly, copy, nonatomic) NSString *storeUbiquitousIdentifier;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, nonatomic) long long storeSubscriptionAdamID;
@property (readonly, nonatomic) unsigned long long storeSagaID;
@property (readonly, nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (readonly, nonatomic) float volumeNormalization;
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreContentID;
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentType;
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentDownloadParameters;
@property (readonly, copy, nonatomic) NSNumber *iTunesStoreContentDSID;
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentPurchasedMediaKind;
@property (readonly, copy, nonatomic) NSString *iTunesStoreContentUserAgent;

+ (BOOL)_shouldRespectStoreCellularDataSetting;
+ (BOOL)_shouldRespectMusicCellularDataSetting;

- (id)init;
- (void).cxx_destruct;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)a0 protectionType:(unsigned long long *)a1 usesPurchaseBundle:(BOOL *)a2;
- (void)setCachedLocalPlaybackAssetFilePath:(id)a0 protectionType:(unsigned long long)a1 assetQuality:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(id /* block */)a0;
- (void)_persistURI:(id)a0 persistentContentKey:(id)a1;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)a0 assetFlavor:(id)a1 protectionType:(unsigned long long)a2 pathExtension:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (long long)likedState:(id)a0;
- (BOOL)_calculateAllowsCellularNetworking;
- (void)getNetworkConstraintsForDownloadKind:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadMediaItemWithCompletionHandler:(id /* block */)a0;
- (void)setLikedState:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)setLikedState:(long long)a0 forUserIdentity:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)a0;
- (BOOL)_requiresPendingItemDownload;
- (void)_setNeedsAllowsCellularNetworkingUpdate;
- (id)_storeRedownloadProductItem;
- (void)_contentTasteControllerDidChangeNotification:(id)a0;
- (void)_musicCellularNetworkingAllowedDidChangeNotification:(id)a0;
- (void)_storeCellularNetworkingAllowedDidChangeNotification:(id)a0;

@end
