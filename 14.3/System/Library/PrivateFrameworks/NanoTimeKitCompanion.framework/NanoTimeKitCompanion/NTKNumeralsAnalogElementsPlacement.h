@interface NTKNumeralsAnalogElementsPlacement : NSObject

+ (double)edgeVerticalAdjustmentDistanceForDevice:(id)a0;
+ (id)_elementsPositionsForHour:(long long)a0 forDevice:(id)a1;
+ (struct CGPoint { double x0; double x1; })hourViewPositionForHour:(long long)a0 complicationHidden:(BOOL)a1 utilitySlot:(long long)a2 forDevice:(id)a3;
+ (struct CGPoint { double x0; double x1; })centerPointFor10NumeralInImageForStyle:(unsigned long long)a0 forDevice:(id)a1;
+ (long long)complicationPlacementForHour:(long long)a0 forDevice:(id)a1;

@end
