@interface CEKApertureSliderAccessibility : __CEKApertureSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)scrollViewDidScroll:(id)a0;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (unsigned long long)_axValidApertureIndexForDiscreteIndex:(unsigned long long)a0;

@end
