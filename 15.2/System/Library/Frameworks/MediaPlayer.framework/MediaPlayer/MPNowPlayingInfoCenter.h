@class MPNowPlayingContentItem, NSString, MRPlayerPath, NSDate, NSMutableDictionary, NSDictionary, MPNowPlayingInfoCenterArtworkContext, NSObject, NSMutableArray, MSVLRUDictionary, MPArtworkResizeUtility, MSVTimer;
@protocol MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDelegate, OS_dispatch_queue, MPNowPlayingPlaybackQueueDataSource;

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator> {
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;
    NSMutableDictionary *_mutatedContentItems;
    NSMutableDictionary *_mutatedPlaybackQueueRequests;
    struct _MSVSignedRange { long long location; long long length; } _loadedContentItemsRange;
    struct _MSVSignedRange { long long location; long long length; } _requestedContentItemsRange;
    NSMutableArray *_contentItemIdentifiers;
    MSVLRUDictionary *_contentItems;
    MPNowPlayingContentItem *_nowPlayingContentItem;
    unsigned long long _playbackState;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    MPArtworkResizeUtility *_artworkResizeUtility;
    MSVTimer *_contentItemInvalidationTimer;
    id<MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    id<MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
    struct { void *createPlaybackQueue; void *createContentItem; void *createChildItem; void *metadata; void *artwork; void *info; void *languageOptions; void *lyrics; } _callbacks;
    void *_fallbackActivity;
    BOOL _invalidated;
    unsigned long long _stateHandle;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;

@property (readonly, nonatomic) BOOL supportsArtworkCatalogLoading;
@property (weak, nonatomic) id<MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) NSString *representedApplicationBundleIdentifier;
@property (weak, nonatomic) id<MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
@property (retain, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
@property (weak, nonatomic) id<MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (nonatomic) unsigned long long playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoCenterForPlayerPath:(id)a0;
+ (id)infoCenterForPlayerID:(id)a0;
+ (id)defaultCenter;

- (void)becomeActive;
- (id)initWithPlayerID:(id)a0;
- (id)_onQueue_stateDictionary;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (void)_becomeActiveIfPossibleWithCompletion:(id /* block */)a0;
- (void)invalidatePlaybackQueue;
- (void)_onQueue_pushNowPlayingInfoAndRetry:(BOOL)a0;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)a0;
- (void)becomeActiveSystemFallback;
- (BOOL)isInvalidated;
- (void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)a0 preferredSessionType:(id)a1 completion:(id /* block */)a2;
- (void)_becomeActiveWithCompletion:(id /* block */)a0;
- (id)_childContentItemForContentItem:(id)a0 index:(long long)a1;
- (void)_contentItemChangedNotification:(id)a0;
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)a0;
- (id)_contentItemIDsInRange:(struct { long long x0; long long x1; })a0 itemsRange:(struct { long long x0; long long x1; } *)a1;
- (void)_getMetadataForContentItem:(id)a0 completion:(id /* block */)a1;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (id)_contentItemForIdentifier:(id)a0 alreadyOnDataSourceQueue:(BOOL)a1;
- (void)_invalidatePlaybackQueueImmediatelyWithCompletion:(id /* block */)a0;
- (void)resignActiveSystemFallback;
- (void).cxx_destruct;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)a0;
- (id)init;
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (id)_artworkCatalogForContentItem:(id)a0;
- (void)invalidate;
- (void)_initializeNowPlayingInfo;
- (id /* block */)artworkCatalogBlockForContentItem:(id)a0;
- (void)dealloc;
- (void)invalidatePlaybackQueueWithCompletion:(id /* block */)a0;
- (id)_contentItemForIdentifier:(id)a0;
- (void *)_createPlaybackQueueForRequest:(void *)a0;
- (void)_onQueue_pushContentItemsUpdate;

@end
