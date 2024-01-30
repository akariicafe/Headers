@interface CEKSliderAccessibility : __CEKSliderAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (double)_axGetDeltaForCurrentValue:(double)a0 toIncrement:(BOOL)a1;
- (double)_axNumberOfTickSegments;

@end
