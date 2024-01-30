@interface CAMZoomControlAccessibility : __CAMZoomControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsVerticalAdjustableElement;
- (double)_axDisplayZoomValue;
- (BOOL)_axHandleZoomControlActivate;
- (BOOL)_axIsZoomToggleOnly;
- (double)_axMaximumZoomFactor;
- (double)_axMinimumZoomFactor;
- (double)_axRoundedZoomFactor:(double)a0;
- (void)_axSetZoomFactorForDisplayValue:(double)a0;
- (long long)_axZoomControlMode;
- (double)_axZoomFactor;
- (void)_setAXZoomFactor:(double)a0;

@end
