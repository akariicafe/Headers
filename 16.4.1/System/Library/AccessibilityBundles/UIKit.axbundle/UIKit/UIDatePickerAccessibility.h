@interface UIDatePickerAccessibility : __UIDatePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (long long)accessibilityContainerType;
- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformEscape;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsScannerGroup;

@end
