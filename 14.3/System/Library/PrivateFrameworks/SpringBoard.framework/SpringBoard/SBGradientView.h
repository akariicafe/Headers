@class NSArray;

@interface SBGradientView : UIView

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)color;

@end
