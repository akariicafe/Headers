@interface CAMExposureSliderAccessibility : __CAMExposureSliderAccessibility_super

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
- (void)_axAdjustValue:(BOOL)a0;

@end
