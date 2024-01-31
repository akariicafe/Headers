@interface UISplitViewControllerPanelImplAccessibility : __UISplitViewControllerPanelImplAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)displayModeButtonItem;
- (void)setViewControllers:(id)a0;
- (void)_updateDisplayModeButtonItem;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisViewController;
- (void)_accessibilityUpdatePanelController;

@end
