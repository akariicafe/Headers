@interface DOCItemRenameTextViewAccessibility : __DOCItemRenameTextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)didMoveToSuperview;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (long long)_accessibilitySortPriority;
- (BOOL)_axIsClearButtonInstalled;
- (void)_axMarkupClearButton;
- (void)installClearButton;

@end
