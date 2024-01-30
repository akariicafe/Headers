@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal *_syncLayer;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (id)synchronizedLayerWithPlayerItem:(id)a0;

- (id)init;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)_removeSelfFromPlayerItem;

@end
