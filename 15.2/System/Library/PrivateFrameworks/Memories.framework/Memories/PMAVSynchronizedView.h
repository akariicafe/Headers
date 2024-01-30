@class AVSynchronizedLayer, AVPlayerItem;

@interface PMAVSynchronizedView : UIView

@property (retain, nonatomic) AVSynchronizedLayer *layer;
@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (Class)layerClass;

- (id)makeBackingLayer;

@end
