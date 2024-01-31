@interface UIMultiColumnViewControllerAccessibility : __UIMultiColumnViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setViewControllers:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_secondColumnBarButtonItem:(long long)a0 createIfNecessary:(BOOL)a1;
- (void)setNavControllers:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;

@end
