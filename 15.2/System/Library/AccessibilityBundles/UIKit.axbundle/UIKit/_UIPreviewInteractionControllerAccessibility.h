@interface _UIPreviewInteractionControllerAccessibility : ___UIPreviewInteractionControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)commitInteractivePreview;
- (BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)a0;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(id /* block */)a0;
- (void)_accessibilityDismissPresentation;
- (BOOL)_accessibilityPerformLeadingAction;
- (BOOL)_accessibilityPerformTrailingAction;
- (BOOL)_accessibilityShowMoreActions;

@end
