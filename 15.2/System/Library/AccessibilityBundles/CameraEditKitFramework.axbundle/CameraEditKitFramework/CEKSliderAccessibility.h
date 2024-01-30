@interface CEKSliderAccessibility : __CEKSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)_axAdjustValue:(BOOL)a0;
- (double)_axGetDeltaForCurrentValue:(double)a0 toIncrement:(BOOL)a1;
- (double)_axNumberOfTickSegments;

@end
