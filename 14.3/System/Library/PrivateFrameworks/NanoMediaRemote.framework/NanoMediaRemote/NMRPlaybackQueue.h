@class NMRMediaRemoteUpdater, NSDictionary, NSData, _NMRPlaybackQueue, NMROrigin, NSObject;
@protocol NMRPlaybackQueueDelegate, OS_dispatch_queue;

@interface NMRPlaybackQueue : NSObject {
    _NMRPlaybackQueue *_upNextPlaybackQueue;
    BOOL _observingMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NMRMediaRemoteUpdater *_playbackQueueUpdater;
    NSDictionary *_nowPlayingInfo;
}

@property (retain, nonatomic) NMROrigin *origin;
@property (weak, nonatomic) id<NMRPlaybackQueueDelegate> delegate;
@property (nonatomic) struct { long long location; long long length; } observedRange;
@property (readonly, nonatomic) NSData *fullPlaybackQueueData;

- (void)setNowPlayingInfo:(id)a0;
- (id)_contentItemIdentifiers;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithData:(id)a0;
- (id)_itemWithIdentifier:(id)a0;
- (void)_refreshCurrentPlaybackQueueFromMediaRemoteWithCompletion:(id /* block */)a0;
- (void *)_mediaRemotePlaybackQueueWithRange:(struct { long long x0; long long x1; })a0 includeMetadata:(BOOL)a1;
- (id)_metadataForItemWithIdentifier:(id)a0;
- (void)_updateWithMediaRemoteQueue:(void *)a0;
- (BOOL)_needsMetadataForMediaRemoteItem:(void *)a0;
- (void)beginObservingMediaRemotePlaybackQueueForOrigin:(id)a0;
- (void *)copyFullMediaRemotePlaybackQueueIncludingMetadata:(BOOL)a0;
- (void *)copyMediaRemotePlaybackQueueWithRange:(struct { long long x0; long long x1; })a0 includeMetadata:(BOOL)a1;
- (id)deltaPlaybackQueueDataFromPreviousData:(id)a0 invalidatedMetadataIdentifiers:(id)a1;
- (void)_updateMetadataWithMediaRemoteItems:(id)a0;
- (struct { long long x0; long long x1; })_rangeOfItemsNeedingMetadataForMediaRemoteQueue:(void *)a0;
- (BOOL)_needsUpdateForMediaRemoteQueue:(void *)a0;

@end
