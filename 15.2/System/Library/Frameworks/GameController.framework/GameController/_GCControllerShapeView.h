@class CAShapeLayer;

@interface _GCControllerShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

@end
