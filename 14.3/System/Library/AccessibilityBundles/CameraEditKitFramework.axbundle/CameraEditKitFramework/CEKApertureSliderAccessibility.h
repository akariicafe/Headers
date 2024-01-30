@interface CEKApertureSliderAccessibility : __CEKApertureSliderAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (unsigned long long)_axValidApertureIndexForDiscreteIndex:(unsigned long long)a0;
- (void)_axAdjustValue:(BOOL)a0;

@end
