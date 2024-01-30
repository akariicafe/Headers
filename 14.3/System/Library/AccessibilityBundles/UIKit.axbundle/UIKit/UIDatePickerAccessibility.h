@interface UIDatePickerAccessibility : __UIDatePickerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (long long)accessibilityContainerType;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityIsScannerGroup;

@end
