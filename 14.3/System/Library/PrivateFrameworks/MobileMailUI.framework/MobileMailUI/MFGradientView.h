@class NSArray, CAGradientLayer;

@interface MFGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *gradientColors;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

@end
