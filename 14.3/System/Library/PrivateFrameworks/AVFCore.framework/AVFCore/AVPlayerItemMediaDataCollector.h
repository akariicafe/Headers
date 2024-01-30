@class AVPlayerItemMediaDataCollectorInternal;

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}

- (id)init;
- (void)dealloc;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;
- (id)_weakReference;

@end
