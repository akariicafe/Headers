@interface CAMZoomControlAccessibility : __CAMZoomControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)_configureForControlMode:(long long)a0 zoomFactor:(double)a1 zoomFactors:(id)a2 displayZoomFactors:(id)a3 zoomButtonContentType:(long long)a4 animated:(BOOL)a5;
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
