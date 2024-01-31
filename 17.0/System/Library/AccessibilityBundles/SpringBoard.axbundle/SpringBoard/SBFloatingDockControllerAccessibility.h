@interface SBFloatingDockControllerAccessibility : __SBFloatingDockControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dismissFloatingDockIfPresentedAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)presentFloatingDockIfDismissedAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
