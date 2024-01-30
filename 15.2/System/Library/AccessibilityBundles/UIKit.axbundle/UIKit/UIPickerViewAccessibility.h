@interface UIPickerViewAccessibility : __UIPickerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElements;
- (void)dealloc;
- (double)scrollAnimationDuration;
- (void)reloadAllComponents;
- (long long)_accessibilityPickerType;
- (void)_accessibilityResetContainerElements;

@end
