@interface NCNotificationListViewAccessibility : __NCNotificationListViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void)_recycleViewIfNecessary:(id)a0 withDataSource:(id)a1;
- (long long)accessibilityContainerType;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsAwayAlertElement;
- (id)_accessibilitySubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_accessibilityVisibleContentInset;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (id)_accessibilityListCell;
- (id)_accessibilityRevealHintView;
- (BOOL)_axHasMultipleViews;
- (BOOL)_axShouldForwardToListCell;

@end
