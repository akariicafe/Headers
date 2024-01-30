@class CAGradientLayer;

@interface SPUIGradientMaskView : UIView

@property (retain, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;

- (id)init;

@end
