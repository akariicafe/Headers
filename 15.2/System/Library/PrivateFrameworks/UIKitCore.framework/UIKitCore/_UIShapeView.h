@class CAShapeLayer;

@interface _UIShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

@end
