@interface UIDatePickerAccessibility : __UIDatePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityPerformEscape;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityContainerType;
- (BOOL)_accessibilityIsScannerGroup;

@end
