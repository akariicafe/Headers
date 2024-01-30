@interface CAMZoomControlAccessibility : __CAMZoomControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsVerticalAdjustableElement;
- (double)_axRoundedZoomFactor:(double)a0;
- (long long)_axZoomControlMode;
- (double)_axDisplayZoomValue;
- (double)_axMaximumZoomFactor;
- (void)_axSetZoomFactorForDisplayValue:(double)a0;
- (double)_axMinimumZoomFactor;
- (BOOL)_axHandleZoomControlActivate;
- (double)_axZoomFactor;
- (void)_setAXZoomFactor:(double)a0;
- (BOOL)_axIsZoomToggleOnly;

@end
