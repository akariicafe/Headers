@interface _UIAlertControllerViewAccessibility : ___UIAlertControllerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (id)accessibilityHeaderElements;
- (void)_prepareDetailMessageLabel;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (BOOL)_accessibilityIsGroupedParent;
- (void)_accessibilityLoadAccessibilityInformation;

@end
