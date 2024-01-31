@interface SBTopAffordanceDotsViewAccessibility : __SBTopAffordanceDotsViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityRoleDescription;
- (BOOL)_accessibilityIsNonDismissableStatusBarElement;
- (id)_axMainSwitcher;
- (id)_axApplicationDisplayName;
- (void)_axSetApplicationDisplayName:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axBounds;

@end
