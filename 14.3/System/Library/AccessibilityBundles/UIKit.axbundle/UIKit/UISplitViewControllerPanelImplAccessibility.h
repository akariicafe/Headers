@interface UISplitViewControllerPanelImplAccessibility : __UISplitViewControllerPanelImplAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_updateDisplayModeButtonItem;
- (id)displayModeButtonItem;
- (void)setViewControllers:(id)a0;
- (void)loadView;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisViewController;
- (void)_axApplyDisplayModeLabelToButtonItem:(id)a0;
- (void)_accessibilityUpdateSideBarToggleButtonItem;
- (void)_accessibilityUpdateSecondaryOnlyShortcutButtonItem;

@end
