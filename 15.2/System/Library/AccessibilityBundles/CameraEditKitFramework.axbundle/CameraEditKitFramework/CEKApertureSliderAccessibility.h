@interface CEKApertureSliderAccessibility : __CEKApertureSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)scrollViewDidScroll:(id)a0;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)_axValidApertureIndexForDiscreteIndex:(unsigned long long)a0;
- (void)_axAdjustValue:(BOOL)a0;

@end
