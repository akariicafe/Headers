@interface NCNotificationListCellAccessibility : __NCNotificationListCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityDragSourceDescriptors;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilityCellButtons;
- (id)_axNCNotificationViewController;
- (id)_accessibilityCellActions;
- (id)_accessibilityListViewParent;
- (id)_accessibilityOpenAction;
- (BOOL)_axIsCollapsed;
- (id)_axLookView;
- (id)axCustomActionsForActions:(id)a0;

@end
