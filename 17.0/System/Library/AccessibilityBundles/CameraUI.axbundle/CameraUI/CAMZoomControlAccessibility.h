@interface CAMZoomControlAccessibility : __CAMZoomControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
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
