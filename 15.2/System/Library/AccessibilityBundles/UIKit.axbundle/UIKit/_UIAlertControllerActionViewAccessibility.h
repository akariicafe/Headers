@interface _UIAlertControllerActionViewAccessibility : ___UIAlertControllerActionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLanguage;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityLocalizedStringTableName;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDestructiveButton;
- (BOOL)_accessibilityUserTestingIsPreferredButton;

@end
