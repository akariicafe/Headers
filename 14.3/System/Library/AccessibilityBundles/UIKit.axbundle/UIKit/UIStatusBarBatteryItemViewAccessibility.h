@interface UIStatusBarBatteryItemViewAccessibility : __UIStatusBarBatteryItemViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)_accessibilityIsBatteryPercentVisible;
- (id)_axCachedAXLabel;
- (BOOL)_axIsCapacityDirty;
- (long long)_accessibilityNonQuantizedBatteryLevel;
- (void)_axSetCachedAXLabel:(id)a0;
- (void)_accessibilitySetNonQuantizedBatteryLevel:(long long)a0;
- (void)_axSetCapacityDirty:(BOOL)a0;

@end
