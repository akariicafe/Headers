@interface _UIPreviewPresentationControllerAccessibility : ___UIPreviewPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)a0;
- (void)_layoutForRevealTransition;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axShowMoreActions:(id)a0;
- (BOOL)_axPerformLeadingAction;
- (BOOL)_axPerformTrailingAction;
- (void)_axDismissPreview;
- (void)_accessibilityDismissPresentation;

@end
