@class UINotificationFeedbackGenerator, NSString, _UIStatesFeedbackGenerator, MTLumaDodgePillView, UIView, UIPanGestureRecognizer, UILabel;
@protocol PLKeyboardHomeAffordanceAssertion, PLExpandedPlatterPresentationControllerDelegate, PLExpandedPlatter, UIViewControllerTransitionCoordinator;

@interface PLExpandedPlatterPresentationController : UIPresentationController <PLViewControllerAnimatorObserving> {
    UIView *_sourceView;
    UIView<PLExpandedPlatter> *_presentedExpandedPlatter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceViewInitialPresentationFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceViewFinalPresentationFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceViewFinalDismissalFrame;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _sourceViewInitialTransform;
    id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    UIView *_dismissLabelContainerView;
    UILabel *_dismissLabel;
    _UIStatesFeedbackGenerator *_dismissFeedbackBehavior;
    UINotificationFeedbackGenerator *_homeAffordanceFeedbackGenerator;
    BOOL _didPlayDismissHaptic;
    struct CGSize { double width; double height; } _childPreferredContentSize;
    MTLumaDodgePillView *_homeAffordanceView;
    BOOL _listenToKeyboardEvents;
    struct { unsigned char didPerformPresentedExpandedPlatterCheck : 1; unsigned char didSetSourceViewInitialPresentationFrame : 1; unsigned char didSetSourceViewFinalPresentationFrame : 1; unsigned char didSetSourceViewFinalDismissalFrame : 1; } _expandedPlatterPresentationControllerHelperFlags;
}

@property (nonatomic, getter=_keyboardFrame, setter=_setKeyboardFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (retain, nonatomic, getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:) id<PLKeyboardHomeAffordanceAssertion> keyboardHomeAffordance;
@property (weak, nonatomic) id<PLExpandedPlatterPresentationControllerDelegate> presentationControllerDelegate;
@property (nonatomic, getter=isHomeAffordanceVisible) BOOL homeAffordanceVisible;
@property (retain, nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (nonatomic) double additionalHomeAffordanceSpacing;
@property (nonatomic) struct CGPoint { double x; double y; } additionalContentTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })useableContainerViewBoundsForExpandedPlatter:(id)a0 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGSize { double x0; double x1; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x0; double x1; })a0 inUseableContainerViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGSize { double x0; double x1; })_sizeOfExpandedPlatter:(id)a0 withPreferredContentSize:(struct CGSize { double x0; double x1; })a1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2 sourceView:(id)a3;
- (void)viewControllerAnimator:(id)a0 willBeginPresentationAnimationWithTransitionContext:(id)a1;
- (void)viewControllerAnimator:(id)a0 willBeginDismissalAnimationWithTransitionContext:(id)a1;
- (id)_clickPresentationInteractionManager;
- (void)_setKeyboardHomeAffordanceVisible:(BOOL)a0;
- (void)_handleBackgroundTap:(id)a0;
- (id)_presentedExpandedPlatter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceViewFinalPresentationFrame;
- (void)_setHomeAffordanceVisible:(BOOL)a0;
- (void)_setLocalHomeAffordanceVisible:(BOOL)a0;
- (BOOL)_isLocalHomeAffordanceVisible;
- (void)_handleHomeAffordancePan:(id)a0;
- (void)_fireHomeGesture;
- (void)_settleHomeAffordance;
- (void)_dismissExpandedPlatterWithTrigger:(long long)a0;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (BOOL)_actuateFeedbackForDismissalIfNecessary;
- (void)_popDismissLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceViewInitialPresentationFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceViewFinalDismissalFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetWithPresentedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })_contentOffsetForPresentedExpandedPlatterView:(id)a0;
- (BOOL)_isKeyboardHomeAffordanceVisible;
- (void)hintDismissalWithCommitProgress:(double)a0 overallProgress:(double)a1;
- (void)completeDismissal;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameOfPresentedViewInContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalDismissalFrameOfPresentingViewInContainerView;

@end
