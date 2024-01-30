@interface UIPickerViewAccessibility : __UIPickerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)reloadAllComponents;
- (double)scrollAnimationDuration;
- (unsigned long long)_accessibilityAutomationType;
- (long long)_accessibilityPickerType;

@end
