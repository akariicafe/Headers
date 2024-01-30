@interface PUOneUpViewControllerAccessibility : __PUOneUpViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_setAccessoryVisible:(BOOL)a0;
- (BOOL)accessibilityPerformMagicTap;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateBarsControllerIfNeeded;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axApplyCustomActionsToTileControllers;
- (void)_axExecuteBlockOnTileViewControllers:(id /* block */)a0;
- (void)_axShowAccessory;

@end
