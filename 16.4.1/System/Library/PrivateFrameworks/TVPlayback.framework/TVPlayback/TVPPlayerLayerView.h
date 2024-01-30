@class AVPlayerLayer;

@interface TVPPlayerLayerView : UIView

@property (readonly, nonatomic) AVPlayerLayer *avPlayerLayer;

+ (Class)layerClass;

@end
