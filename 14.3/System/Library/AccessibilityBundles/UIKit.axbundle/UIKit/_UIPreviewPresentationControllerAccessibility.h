@interface _UIPreviewPresentationControllerAccessibility : ___UIPreviewPresentationControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)containerViewWillLayoutSubviews;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)a0;
- (void)_layoutForRevealTransition;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axShowMoreActions:(id)a0;
- (id)_axTitleForPreviewAction:(id)a0;
- (BOOL)_axPerformLeadingAction;
- (BOOL)_axPerformTrailingAction;
- (void)_axDismissPreview;
- (void)_axSetupContainerView;
- (void)_accessibilityDismissPresentation;

@end
