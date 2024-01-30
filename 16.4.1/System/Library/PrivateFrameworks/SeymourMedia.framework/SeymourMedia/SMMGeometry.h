@interface SMMGeometry : NSObject

+ (double)ceilValue:(double)a0 toScale:(double)a1;
+ (double)ceilValue:(double)a0 toScaleOfScreen:(id)a1;
+ (double)ceilValue:(double)a0 toScaleOfView:(id)a1;
+ (double)floorValue:(double)a0 toScale:(double)a1;
+ (double)floorValue:(double)a0 toScaleOfScreen:(id)a1;
+ (double)floorValue:(double)a0 toScaleOfView:(id)a1;
+ (struct CGPoint { double x0; double x1; })getCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)roundValue:(double)a0 toScale:(double)a1;
+ (double)roundValue:(double)a0 toScaleOfScreen:(id)a1;
+ (double)roundValue:(double)a0 toScaleOfView:(id)a1;

@end
