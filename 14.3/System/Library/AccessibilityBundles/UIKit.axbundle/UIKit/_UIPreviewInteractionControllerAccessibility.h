@interface _UIPreviewInteractionControllerAccessibility : ___UIPreviewInteractionControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)a0;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(id /* block */)a0;
- (void)commitInteractivePreview;
- (void)_accessibilityDismissPresentation;
- (BOOL)_accessibilityPerformLeadingAction;
- (BOOL)_accessibilityPerformTrailingAction;
- (BOOL)_accessibilityShowMoreActions;
- (id)_accessibilityCustomActionsFromPresentedViewController:(id)a0;
- (BOOL)_axPerformPreviewAction:(int)a0;
- (void)_accessibilityTeardownPresentationState;

@end
