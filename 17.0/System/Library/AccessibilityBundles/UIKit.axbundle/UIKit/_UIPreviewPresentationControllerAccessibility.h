@interface _UIPreviewPresentationControllerAccessibility : ___UIPreviewPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dealloc;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)_layoutForRevealTransition;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityDismissPresentation;
- (void)_axDismissPreview;
- (BOOL)_axPerformLeadingAction;
- (BOOL)_axPerformTrailingAction;
- (BOOL)_axShowMoreActions:(id)a0;

@end
