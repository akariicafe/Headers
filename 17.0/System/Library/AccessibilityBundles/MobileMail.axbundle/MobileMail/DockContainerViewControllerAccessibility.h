@interface DockContainerViewControllerAccessibility : __DockContainerViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityShouldAttemptToAddDismissalElement;
- (id)_accessibilitySpeakThisViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axFrameForDismissDraftsElement;
- (void)_accessibilityUpdateDraftElements;
- (void)_axAddDraftsElementIfNecessaryUsingVC:(id)a0;
- (id)_axDismissDraftElement;
- (double)_axGetDraftsElementHeight;
- (void)_axSetDraftsElementHeight:(double)a0;
- (void)_axSetViewContainingDraftsElement:(id)a0;
- (id)_axViewContainingDraftsElement;
- (void)_configureNewDockedView:(id)a0;
- (void)_setDockVisible:(BOOL)a0;
- (void)activateExposeModeAnimated:(BOOL)a0;
- (id)initWithPersistence:(id)a0 scene:(id)a1 rootViewController:(id)a2;
- (void)setActiveTiltedTabViewController:(id)a0;

@end
