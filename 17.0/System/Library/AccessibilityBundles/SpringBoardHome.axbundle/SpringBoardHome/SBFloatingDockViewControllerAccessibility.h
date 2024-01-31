@interface SBFloatingDockViewControllerAccessibility : __SBFloatingDockViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dismissPresentedFolderAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dockViewDidResignVisible;
- (BOOL)_axIsClosingFolder;
- (void)_axSetIsClosingFolder:(BOOL)a0;

@end
