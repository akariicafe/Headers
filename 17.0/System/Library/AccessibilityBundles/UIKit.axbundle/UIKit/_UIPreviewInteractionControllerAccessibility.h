@interface _UIPreviewInteractionControllerAccessibility : ___UIPreviewInteractionControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)a0;
- (void)commitInteractivePreview;
- (void)_accessibilityDismissPresentation;
- (BOOL)_accessibilityPerformLeadingAction;
- (BOOL)_accessibilityPerformTrailingAction;
- (BOOL)_accessibilityShowMoreActions;

@end
