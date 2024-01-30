@interface AXPIFingerUtilities : NSObject

+ (BOOL)laserEnabled;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)a0 aroundPoint:(struct CGPoint { double x0; double x1; })a1 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)_points:(id)a0 adjustedForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)defaultLocationsForNumberOfFingers:(unsigned long long)a0 aroundPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)defaultPinchLocationsAroundPoint:(struct CGPoint { double x0; double x1; })a0 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)fingerModelsForPointStrings:(id)a0;
+ (unsigned long long)fingerShapeForCorner:(unsigned long long)a0;
+ (id)pointStringsForFingerModels:(id)a0;
+ (id)pointerAnimationSettings;
+ (id)pointerFiltersForLuminanceLevel:(unsigned long long)a0;
+ (void)updateFirstLocation:(struct CGPoint { double x0; double x1; } *)a0 secondLocation:(struct CGPoint { double x0; double x1; } *)a1 forPinchWithRadiusDelta:(double)a2 angleDelta:(double)a3;

@end
