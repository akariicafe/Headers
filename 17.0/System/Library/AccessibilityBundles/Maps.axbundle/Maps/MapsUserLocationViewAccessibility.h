@interface MapsUserLocationViewAccessibility : __MapsUserLocationViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnotatePuck;
- (id)_axPuck;
- (BOOL)_axIsShowingVLFCallout;
- (BOOL)_axIsShowingVLFUI;
- (id)_axVLFElements;
- (id)vlfPuckModeCircleView;

@end
