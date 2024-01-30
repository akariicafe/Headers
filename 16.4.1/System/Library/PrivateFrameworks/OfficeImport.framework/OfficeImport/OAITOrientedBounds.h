@interface OAITOrientedBounds : NSObject

+ (float)scaleFactorFromLength:(float)a0 toLength:(float)a1;
+ (id)absoluteOrientedBoundsOfDrawable:(id)a0;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)a0 parentOrientedBounds:(id)a1 parentLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)a0;
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)a0 logicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axisParallelBoundsOfOrientedBounds:(id)a0;
+ (id)relativeOrientedBoundsOfDrawable:(id)a0;
+ (id)relativeOrientedBoundsWithAbsoluteOrientedBounds:(id)a0 parentOrientedBounds:(id)a1 parentLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toOrientedBounds:(id)a1;

@end
