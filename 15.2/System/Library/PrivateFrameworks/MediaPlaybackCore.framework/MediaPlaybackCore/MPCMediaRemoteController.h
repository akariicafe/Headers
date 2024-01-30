@class MPCPlayerPath, NSString, MSVLRUDictionary, NSMutableDictionary, MPCFuture, NSObject, NSMutableArray, NSMapTable;
@protocol OS_dispatch_queue, MPArtworkDataSource;

@interface MPCMediaRemoteController : NSObject <_MPArtworkCatalogOverlayDelegate, MSVLRUDictionaryDelegate, MPMediaRemoteEntityArtworkGenerator> {
    MPCFuture *_playbackStateFuture;
    MPCFuture *_supportedCommandsFuture;
    MPCFuture *_playingItemIdentifierFuture;
    NSString *_playingItemIdentifier;
    MPCFuture *_queueIdentifierFuture;
    NSString *_queueIdentifier;
    struct _MSVSignedRange { long long location; long long length; } _loadedContentItemsRange;
    struct _MSVSignedRange { long long location; long long length; } _requestedContentItemsRange;
    NSMutableArray *_contentItemIDs;
    MSVLRUDictionary *_contentItems;
    NSMutableDictionary *_optimisticStateContentItems;
    NSMutableDictionary *_contentItemChanges;
    MSVLRUDictionary *_contentItemArtwork;
    NSMutableDictionary *_contentItemArtworkIdentifiers;
    NSMapTable *_contentItemIDsFutures;
    NSMapTable *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    unsigned long long _stateHandle;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteReplyQueue;

@property (retain, nonatomic) MPCPlayerPath *resolvedPlayerPath;
@property (readonly, nonatomic) id<MPArtworkDataSource> mediaRemoteArtworkDataSource;
@property (readonly, nonatomic) id<MPArtworkDataSource> remotePlayerArtworkDataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id invalidationToken;
@property (readonly, nonatomic) long long playbackStateCacheState;
@property (readonly, nonatomic) MPCFuture *playbackState;
@property (readonly, nonatomic) long long supportedCommandsCacheState;
@property (readonly, nonatomic) MPCFuture *supportedCommands;
@property (readonly, nonatomic) long long playingIdentifierCacheState;
@property (readonly, nonatomic) MPCFuture *playingIdentifier;
@property (readonly, nonatomic) long long queueIdentifierCacheState;
@property (readonly, nonatomic) MPCFuture *queueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldRegisterForNotifications;
+ (void)sendCommand:(unsigned int)a0 options:(id)a1 toPlayerPath:(id)a2 completion:(id /* block */)a3;
+ (id)controllerForPlayerPath:(id)a0;
+ (void)_sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 toPlayerPath:(id)a3 completion:(id /* block */)a4;
+ (void)_sendLocalCommand:(unsigned int)a0 playbackIntent:(id)a1 options:(id)a2 toPlayerPath:(id)a3 completion:(id /* block */)a4;
+ (void)_sendRemoteCommand:(unsigned int)a0 playbackIntent:(id)a1 options:(id)a2 toPlayerPath:(id)a3 completion:(id /* block */)a4;

- (id)_onQueue_stateDictionary;
- (void)artworkCatalog:(id)a0 didConfigureView:(id)a1 withRepresentation:(id)a2;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)a0 beforeContentItemIdentifier:(id)a1;
- (long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (long long)contentItemCacheStateForIdentifier:(id)a0;
- (id /* block */)_artworkCatalogBlockForContentItem:(id)a0;
- (void)dictionary:(id)a0 willRemoveObject:(id)a1 forKey:(id)a2;
- (void)_onQueue_mergeContentItems:(id)a0 queueRange:(struct _MSVSignedRange { long long x0; long long x1; })a1 requestRange:(struct _MSVSignedRange { long long x0; long long x1; })a2;
- (void)invalidateAllTokens;
- (id)_createExportableArtworkPropertiesForContentItem:(id)a0;
- (id /* block */)_onQueue_setOptimisticPlaybackState:(unsigned int)a0 withOptions:(id)a1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)a0 afterContentItemIdentifier:(id)a1;
- (void)_playbackStateDidChangeNotification:(id)a0;
- (id /* block */)_onQueue_setOptimisticElapsedTimeForContentItem:(id)a0 elapsedTime:(double)a1 rate:(float)a2;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)a0;
- (void)_supportedCommandsDidChangedNotification:(id)a0;
- (void).cxx_destruct;
- (id)contentItemArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (id)_init;
- (void)artworkCatalog:(id)a0 willConfigureView:(id)a1;
- (void)_contentItemArtworkChangedNotification:(id)a0;
- (id /* block */)_onQueue_setOptimisticPlayingItemIdentifier:(id)a0;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (void)artworkCatalog:(id)a0 didClearFromView:(id)a1;
- (id)contentItemForIdentifier:(id)a0;
- (id)playQueueIdentifiersForRequest:(void *)a0;
- (id /* block */)artworkCatalogBlockForContentItem:(id)a0;
- (id)_legacyCommands;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)a0;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (void)dealloc;
- (id)overlayVisualIdenticalityForCatalog:(id)a0;
- (void)_playbackQueueContentItemsChangedNotification:(id)a0;
- (id /* block */)_onQueue_updateOptimisticStateForCommand:(unsigned int)a0 options:(id)a1;
- (void)_playbackQueueChangedNotification:(id)a0;
- (struct CGSize { double x0; double x1; })overlayScaledFittingSizeForCatalog:(id)a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;

@end
