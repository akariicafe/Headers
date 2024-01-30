@interface UISliderAccessibility : __UISliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)layoutSubviews;
- (id)_viewToAddFocusLayer;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityMinValue;
- (double)_accessibilityMaxValue;
- (double)_accessibilityNumberValue;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_accessibilitySetValue:(id)a0;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (id)_accessibilityAbsoluteValue;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (void)_accessibilityAnnounceNewValue;

@end
