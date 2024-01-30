@interface UISplitViewControllerAccessibility : __UISplitViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setViewControllers:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_accessibilitySpeakThisViewController;
- (void)_accessibilityLoadAccessibilityInformation;

@end
