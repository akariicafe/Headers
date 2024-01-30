@interface SMMGeometry : NSObject

+ (double)floorValue:(double)a0 toScale:(double)a1;
+ (double)floorValue:(double)a0 toScaleOfView:(id)a1;
+ (double)floorValue:(double)a0 toScaleOfScreen:(id)a1;
+ (double)roundValue:(double)a0 toScale:(double)a1;
+ (double)roundValue:(double)a0 toScaleOfView:(id)a1;
+ (double)roundValue:(double)a0 toScaleOfScreen:(id)a1;
+ (double)ceilValue:(double)a0 toScale:(double)a1;
+ (double)ceilValue:(double)a0 toScaleOfView:(id)a1;
+ (double)ceilValue:(double)a0 toScaleOfScreen:(id)a1;

@end
