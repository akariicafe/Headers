@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal *_syncLayer;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (void)initialize;
+ (id)synchronizedLayerWithPlayerItem:(id)a0;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)_removeSelfFromPlayerItem;

@end
