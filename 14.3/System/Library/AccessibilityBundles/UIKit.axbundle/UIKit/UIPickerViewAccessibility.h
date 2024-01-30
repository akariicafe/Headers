@interface UIPickerViewAccessibility : __UIPickerViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilityResetContainerElements;
- (void)dealloc;
- (void)reloadAllComponents;
- (double)scrollAnimationDuration;
- (long long)_accessibilityPickerType;

@end
