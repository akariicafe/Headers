@interface UISplitViewControllerPanelImplAccessibility : __UISplitViewControllerPanelImplAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setViewControllers:(id)a0;
- (id)displayModeButtonItem;
- (void)_updateDisplayModeButtonItem;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisViewController;
- (void)_accessibilityUpdatePanelController;

@end
