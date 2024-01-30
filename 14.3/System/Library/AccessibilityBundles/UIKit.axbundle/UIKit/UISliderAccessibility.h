@interface UISliderAccessibility : __UISliderAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (double)_accessibilityMinValue;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityMaxValue;
- (double)_accessibilityNumberValue;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (id)_viewToAddFocusLayer;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)_accessibilitySetValue:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (id)_accessibilityAbsoluteValue;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (void)_accessibilityAnnounceNewValue;

@end
