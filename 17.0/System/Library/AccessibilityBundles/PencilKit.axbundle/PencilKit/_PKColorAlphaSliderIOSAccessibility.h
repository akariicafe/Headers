@interface _PKColorAlphaSliderIOSAccessibility : ___PKColorAlphaSliderIOSAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)didPanSliderKnob:(id)a0;
- (double)_accessibilityColorAlpha;
- (void)_accessibilitySetColorAlpha:(double)a0;

@end
