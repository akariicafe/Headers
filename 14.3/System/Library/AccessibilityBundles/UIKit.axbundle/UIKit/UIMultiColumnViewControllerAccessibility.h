@interface UIMultiColumnViewControllerAccessibility : __UIMultiColumnViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setViewControllers:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewDidAppear:(BOOL)a0;
- (void)setNavControllers:(id)a0;
- (id)_secondColumnBarButtonItem:(long long)a0 createIfNecessary:(BOOL)a1;
- (void)_axModalizeViewControllerViews;

@end
