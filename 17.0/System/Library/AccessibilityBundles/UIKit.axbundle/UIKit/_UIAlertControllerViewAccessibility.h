@interface _UIAlertControllerViewAccessibility : ___UIAlertControllerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (long long)accessibilityContainerType;
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
