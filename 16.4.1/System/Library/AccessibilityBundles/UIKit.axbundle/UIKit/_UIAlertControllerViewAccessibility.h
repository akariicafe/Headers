@interface _UIAlertControllerViewAccessibility : ___UIAlertControllerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (unsigned long long)accessibilityTraits;
- (void)_prepareDetailMessageLabel;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (id)accessibilityHeaderElements;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsGroupedParent;
- (void)_accessibilityLoadAccessibilityInformation;

@end
