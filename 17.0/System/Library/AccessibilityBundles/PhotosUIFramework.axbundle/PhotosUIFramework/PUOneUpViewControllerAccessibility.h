@interface PUOneUpViewControllerAccessibility : __PUOneUpViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setAccessoryVisible:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateBarsControllerIfNeeded;
- (void)_axApplyCustomActionsToTileControllers;
- (void)_axExecuteBlockOnTileViewControllers:(id /* block */)a0;
- (void)_axShowAccessory;

@end
