@interface CEKSliderAccessibility : __CEKSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (double)_axGetDeltaForCurrentValue:(double)a0 toIncrement:(BOOL)a1;
- (double)_axNumberOfTickSegments;

@end
