@interface CEKApertureSliderAccessibility : __CEKApertureSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (unsigned long long)_axValidApertureIndexForDiscreteIndex:(unsigned long long)a0;

@end
