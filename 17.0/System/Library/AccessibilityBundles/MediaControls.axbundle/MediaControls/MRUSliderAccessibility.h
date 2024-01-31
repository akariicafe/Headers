@interface MRUSliderAccessibility : __MRUSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (void)_accessibilityBumpValue:(BOOL)a0;

@end
