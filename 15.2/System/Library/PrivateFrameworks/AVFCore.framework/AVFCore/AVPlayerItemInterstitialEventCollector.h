@class AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id /* block */ _obtainCoordinator;
    AVPlayerItem *_weakReferenceToPlayerItem;
}

- (id)initWithCoordinatorGenerator:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_updateTaggedRangeMetadataArray:(id)a0;
- (void)_detatchFromPlayerItem;
- (void)dealloc;

@end
