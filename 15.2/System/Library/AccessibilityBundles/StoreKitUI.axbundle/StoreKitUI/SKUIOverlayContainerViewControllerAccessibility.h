@interface SKUIOverlayContainerViewControllerAccessibility : __SKUIOverlayContainerViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityPerformEscape;
- (void)showViewControllers:(id)a0;
- (void)showViewController:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)dismissWithFadeTransitionCompletionBlock:(id /* block */)a0;
- (void)dismissWithFlipTransition:(id)a0 completionBlock:(id /* block */)a1;
- (id)backstopControl;
- (void)showViewController:(id)a0 withFlipTransition:(id)a1 completionBlock:(id /* block */)a2;

@end
