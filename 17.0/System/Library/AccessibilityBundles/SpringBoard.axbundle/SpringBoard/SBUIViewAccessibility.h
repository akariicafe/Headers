@interface SBUIViewAccessibility : __SBUIViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_isTransparentFocusRegion;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (double)_axScaleTransformForFocusLayerLineWidth;
- (BOOL)_accessibilityPointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_axPerformGestureForAction:(id)a0;

@end
