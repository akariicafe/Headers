@interface MainWindowRootViewControllerAccessibility : __MainWindowRootViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)searchEnded;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityAddSearchToAccessibilityViews:(id)a0;
- (void)_accessibilityAddSwitcherSearchToAccessibilityViews:(id)a0;
- (void)_accessibilityRefreshSearchElementIfNeeded;
- (void)_accessibilitySetAccessibilityElementsForDisplayMode:(long long)a0 searchDisplayMode:(long long)a1;
- (void)searchBegan;
- (void)setupSearchControlForTraitCollection:(id)a0;

@end
