@class AVPlayerLayer;

@interface AVAppStorePlayerLayerView : UIView

@property (readonly, nonatomic) AVPlayerLayer *layer;

+ (Class)layerClass;

@end
