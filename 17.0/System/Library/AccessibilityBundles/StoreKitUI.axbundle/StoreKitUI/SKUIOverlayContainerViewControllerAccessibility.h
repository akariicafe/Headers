@interface SKUIOverlayContainerViewControllerAccessibility : __SKUIOverlayContainerViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityPerformEscape;
- (id)backstopControl;
- (void)dismissWithFadeTransitionCompletionBlock:(id /* block */)a0;
- (void)dismissWithFlipTransition:(id)a0 completionBlock:(id /* block */)a1;
- (void)showViewController:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)showViewController:(id)a0 withFlipTransition:(id)a1 completionBlock:(id /* block */)a2;
- (void)showViewControllers:(id)a0;

@end
