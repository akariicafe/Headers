@interface VerticalToggleSliderAccessibility : __VerticalToggleSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityAnnounceNewValue;
- (void)_accessibilityIncreaseSlider:(BOOL)a0;
- (void)dragged:(id)a0;

@end
