@class NSString, UIViewController;
@protocol WFCompactPlatterPresentation, UIViewControllerTransitionCoordinator;

@interface WFCompactPlatterPresentationController : UIPresentationController <WFCompactPlatterContentContainer>

@property (nonatomic) long long transitionState;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> activeTransitionCoordinator;
@property (readonly, nonatomic) UIViewController<WFCompactPlatterPresentation> *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })usableFrameForPresentingInContainerViewOfSize:(struct CGSize { double x0; double x1; })a0;

- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_containerIgnoresDirectTouchEvents;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)platterPresentationDidInvalidateSize:(id)a0;
- (double)maximumExpectedHeightForPlatterPresentation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfDismissedViewInContainerView;
- (void)updatePresentedViewFrameAnimatedAlongsideKeyboard:(BOOL)a0;
- (void)keyboardWillChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentedViewFrameInContainerViewOfSize:(struct CGSize { double x0; double x1; })a0 withSizeCalculation:(BOOL)a1;

@end
