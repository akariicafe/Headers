@interface MFConversationItemFooterViewAccessibility : __MFConversationItemFooterViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)layoutSubviews;
- (long long)accessibilityNavigationStyle;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityPerformLeadingAction;
- (id)_accessibilityConversationViewControllerForCell:(id)a0;
- (id)_accessibilityParentCell;
- (void)_accessibilityUpdateLeadingActionTitle:(id)a0;

@end
