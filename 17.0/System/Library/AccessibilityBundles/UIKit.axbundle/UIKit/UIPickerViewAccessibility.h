@interface UIPickerViewAccessibility : __UIPickerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (void)reloadAllComponents;
- (double)scrollAnimationDuration;
- (unsigned long long)_accessibilityAutomationType;
- (long long)_accessibilityPickerType;

@end
