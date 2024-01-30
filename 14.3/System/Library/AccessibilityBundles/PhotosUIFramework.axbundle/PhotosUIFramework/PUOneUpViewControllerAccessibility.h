@interface PUOneUpViewControllerAccessibility : __PUOneUpViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_updateBarsControllerIfNeeded;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (void)_setAccessoryVisible:(BOOL)a0;
- (void)_axApplyCustomActionsToTileControllers;
- (void)_axExecuteBlockOnTileViewControllers:(id /* block */)a0;
- (void)_axShowAccessory;

@end
