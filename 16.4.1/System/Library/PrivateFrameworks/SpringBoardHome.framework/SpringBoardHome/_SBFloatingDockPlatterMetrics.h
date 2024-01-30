@interface _SBFloatingDockPlatterMetrics : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (readonly, nonatomic) double shadowRadius;
@property (readonly, nonatomic) double shadowYOffset;

- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 continuousCornerRadius:(double)a1 shadowRadius:(double)a2 shadowYOffset:(double)a3;

@end
