@interface CAMLowLightSliderAccessibility : __CAMLowLightSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;

@end
