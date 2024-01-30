@class CAGradientLayer;

@interface SKUIGradientView : UIView

@property (readonly, retain, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;

@end
