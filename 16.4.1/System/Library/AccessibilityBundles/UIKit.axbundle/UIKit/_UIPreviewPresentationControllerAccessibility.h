@interface _UIPreviewPresentationControllerAccessibility : ___UIPreviewPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)_layoutForRevealTransition;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityDismissPresentation;
- (void)_axDismissPreview;
- (BOOL)_axPerformLeadingAction;
- (BOOL)_axPerformTrailingAction;
- (BOOL)_axShowMoreActions:(id)a0;

@end
