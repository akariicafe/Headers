@interface UISliderAccessibility : __UISliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (id)_viewToAddFocusLayer;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (double)_accessibilityMinValue;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityMaxValue;
- (double)_accessibilityNumberValue;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilityAbsoluteValue;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (void)_accessibilityAnnounceNewValue;

@end
