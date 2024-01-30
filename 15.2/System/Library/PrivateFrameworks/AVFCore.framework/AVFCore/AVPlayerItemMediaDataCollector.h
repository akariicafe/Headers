@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)_weakReference;
- (id)init;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;
- (void)dealloc;

@end
