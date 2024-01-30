@class AVPlayerLayer;

@interface _AVSimplePlayerLayerView : UIView

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

+ (Class)layerClass;
+ (id)keyPathsForValuesAffectingPlayerLayer;

@end
