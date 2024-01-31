@interface SBSwitcherShelfViewControllerAccessibility : __SBSwitcherShelfViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)clientDidResetForUserAttention:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithSwitcherController:(id)a0 shelf:(id)a1 delegate:(id)a2;
- (void)_axSetupShelfSwitcherViewController;

@end
