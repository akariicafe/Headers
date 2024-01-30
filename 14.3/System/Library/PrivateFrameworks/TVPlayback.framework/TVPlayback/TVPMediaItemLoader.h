@class NSError, NSString, AVURLAsset, TVPMediaItemTimingData, TVPStateMachine, TVPContentKeySession, NSTimer, NSNotification, NSObject;
@protocol OS_dispatch_queue, TVPMediaItem;

@interface TVPMediaItemLoader : NSObject <AVAssetResourceLoaderDelegate>

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AVURLAsset *AVAsset;
@property (retain, nonatomic) TVPMediaItemTimingData *timingData;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) AVURLAsset *AVAssetInternal;
@property (retain, nonatomic) TVPContentKeySession *contentKeySession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetInternalAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadContextAccessQueue;
@property (nonatomic) unsigned long long assetLoadContext;
@property (nonatomic) unsigned long long refCount;
@property (copy, nonatomic) NSString *mediaItemLoaderGUID;
@property (retain, nonatomic) NSTimer *diskSpaceMonitorTimer;
@property (nonatomic) BOOL cleanedUp;
@property (nonatomic) BOOL AVAudioSessionConfiguredAfterMediaServicesReset;
@property (retain, nonatomic) NSNotification *savedMediaServerResetUserNotification;
@property (retain, nonatomic) AVURLAsset *existingAVAsset;
@property (readonly, nonatomic) BOOL containsStreamingAVAsset;
@property (retain, nonatomic) id reportingHierarchyToken;
@property (nonatomic) BOOL allowsCellularUsage;
@property (nonatomic) BOOL allowsConstrainedNetworkUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)loaderForMediaItem:(id)a0;
+ (void)removeTemporaryDownloadDirectory;
+ (id)tempDirURL;

- (void)_cleanUp;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMediaItem:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForRenewalOfRequestedResource:(id)a1;
- (void)loadIfNecessary;
- (void)_registerStateMachineHandlers;
- (void)cleanupIfNecessary;
- (id)newPlayerItem;
- (void)prepareForPlaybackInitiation;
- (void)_stopBackgroundCaching:(id)a0;
- (void)_mediaItemPlaybackErrorDidOccur:(id)a0;
- (void)_mediaItemStopPlayback:(id)a0;
- (id)_avAssetOptions;
- (void)_avAssetMediaServicesReset:(id)a0;
- (void)_avAudioSessionMediaServicesReset:(id)a0;
- (BOOL)_needToLoadBlockingMetadataKeys;
- (void)_loadMediaItemMetadataAsynchronously;
- (void)_postMediaServicesResetFailureWithNotification:(id)a0;
- (void)_avAudioSessionConfiguredAfterMediaServicesReset;
- (id)_metadataKeysToLoad;
- (id)_rollKeyNameFromType:(unsigned long long)a0;
- (id)_skipKeyNameFromType:(unsigned long long)a0;
- (id)_stringValueForKey:(id)a0 fromMetadata:(id)a1 andKeyIdentifierMap:(id)a2;
- (id)_numberValueForKey:(id)a0 fromMetadata:(id)a1 andKeyIdentifierMap:(id)a2;
- (unsigned long long)_rollTypeFromMetadataItemKey:(id)a0;
- (unsigned long long)_skipTypeFromMetadataItemKey:(id)a0;
- (id)_rollKeyNamesForType:(unsigned long long)a0 withCount:(unsigned long long)a1;
- (id)_skipKeyNamesForType:(unsigned long long)a0 withCount:(unsigned long long)a1;
- (id)_advisoryKeyNamesWithCount:(unsigned long long)a0;
- (id)_rollInfoFromMetadata:(id)a0 keyIdentifierMap:(id)a1 forType:(unsigned long long)a2 withTotalCount:(unsigned long long)a3;
- (id)_skipInfoFromMetadata:(id)a0 keyIdentifierMap:(id)a1 forType:(unsigned long long)a2 withTotalCount:(unsigned long long)a3;
- (id)_advisoryInfoFromMetadata:(id)a0 keyIdentifierMap:(id)a1 withTotalCount:(unsigned long long)a2;
- (id)_productPlacementInfoFromMetadata:(id)a0 keyIdentifierMap:(id)a1;
- (id)_tomatoFreshnessFromString:(id)a0;
- (id)_contentKeyRequestParamsFromBase64String:(id)a0;
- (void)loadSHA1DigestWithCompletion:(id /* block */)a0;

@end
