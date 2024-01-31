@interface CEKSliderAccessibility : __CEKSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (double)_axGetDeltaForCurrentValue:(double)a0 toIncrement:(BOOL)a1;
- (double)_axNumberOfTickSegments;

@end
