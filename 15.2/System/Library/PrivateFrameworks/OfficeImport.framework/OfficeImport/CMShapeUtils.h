@interface CMShapeUtils : NSObject

+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)a0 parentOrientedBounds:(id)a1 parentLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (float)scaleFactorFromLength:(float)a0 toLength:(float)a1;
+ (id)transformFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toOrientedBounds:(id)a1;
+ (float)normalizedAngle:(float)a0;
+ (id)inscribedBoundsWithBounds:(id)a0 logicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)a0 parentBounds:(id)a1;
+ (float)fontSizeForText:(id)a0 insideRectangle:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(float)a1 offsetX:(float)a2 offsetY:(float)a3;
+ (float)intersectionAngleNextToAngle:(float)a0 isAfter:(BOOL)a1 nodeSize:(struct CGSize { double x0; double x1; })a2;
+ (id)internalBoundsWithBounds:(id)a0 scaleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)transformedBoundsWithBounds:(id)a0 transform:(id)a1;
+ (BOOL)isShapeALine:(id)a0;
+ (double)mapAdjustCoord:(struct OADAdjustCoord { BOOL x0; int x1; })a0 geometry:(id)a1;
+ (double)getFormulaResultFromCustomGeometry:(id)a0 atIndex:(unsigned long long)a1;
+ (int)radToNativeAngle:(double)a0 isEscher:(BOOL)a1;
+ (double)nativeAngleToRad:(int)a0 isEscher:(BOOL)a1;
+ (int)mapFormulaKeywordValue:(int)a0 geometry:(id)a1;
+ (double)mapFormulaOfType:(int)a0 argValues:(double *)a1 isEscher:(BOOL)a2;
+ (double)fixedPointDegToRad:(int)a0;
+ (void)setCoordSpaceForCustomeGeometry:(id)a0 fromSize:(struct CGSize { double x0; double x1; })a1;
+ (int)radToFixedPointDeg:(double)a0;
+ (double)milliMinutesToRad:(int)a0;
+ (int)radToMilliMinutes:(double)a0;

@end
