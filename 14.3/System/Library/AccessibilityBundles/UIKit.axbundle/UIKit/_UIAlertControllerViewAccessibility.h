@interface _UIAlertControllerViewAccessibility : ___UIAlertControllerViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)_accessibilityAutomationType;
- (long long)accessibilityContainerType;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (id)accessibilityHeaderElements;
- (BOOL)accessibilityViewIsModal;
- (BOOL)accessibilityPerformEscape;
- (void)_prepareMesssageLabel;
- (void)_prepareDetailMessageLabel;
- (void)_prepareTitleLabel;

@end
