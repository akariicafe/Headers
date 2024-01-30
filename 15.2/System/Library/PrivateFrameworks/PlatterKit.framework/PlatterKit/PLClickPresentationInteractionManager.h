@class _UIClickPresentationInteraction, NSString, _UIClickPresentation, UIGestureRecognizer, UIViewController;
@protocol PLClickPresentationInteractionManagerDelegate, PLClickPresentationInteractionPresentable, PLClickPresentationInteractionPresenting;

@interface PLClickPresentationInteractionManager : NSObject <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate> {
    BOOL _didPresent;
    UIViewController<PLClickPresentationInteractionPresenting> *_presentingViewController;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    _UIClickPresentation *_clickPresentation;
    id /* block */ _presentationCompletion;
    id /* block */ _dismissalCompletion;
    struct { unsigned char delegateImplementsContainerView : 1; unsigned char delegateImplementsTransitioningDelegate : 1; unsigned char delegateImplementsShouldBeginInteraction : 1; unsigned char delegateImplementsShouldFinishInteraction : 1; unsigned char delegateImplementsWillBeginUserInteraction : 1; unsigned char delegateImplementsDidEndUserInteraction : 1; unsigned char delegateImplementsWillDismissPresentedContent : 1; unsigned char delegateImplementsDeclinedDismissingPresentedContent : 1; unsigned char delegateImplementsShouldAllowLongPressGesture : 1; unsigned char delegateShouldFinishInteraction : 1; } _clickPresentationInteractionManagerDelegateFlags;
}

@property (nonatomic, getter=_willPresent, setter=_setWillPresent:) BOOL willPresent;
@property (nonatomic, setter=_setDidInteractionInitiateWithHint:) BOOL didInteractionInitiateWithHint;
@property (weak, nonatomic) id<PLClickPresentationInteractionManagerDelegate> delegate;
@property (readonly, weak, nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentedViewController;
@property (readonly, nonatomic, getter=hasCommittedToPresentation) BOOL committedToPresentation;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)_clickInteractionDidEnd;
- (BOOL)presentIfPossible:(id /* block */)a0;
- (void)_delegateShouldFinishInteractionThatReachedForceThreshold:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (void)_delegateWillDismissPresentedContentWithTrigger:(long long)a0;
- (BOOL)_delegateShouldBeginInteractionWithTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)a0;
- (id)_presentedViewController;
- (void)_setPresentingViewControllerHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (BOOL)_dismissIfPossibleWithTrigger:(long long)a0;
- (id)initWithPresentingViewController:(id)a0;
- (void)_clickPresentationTransitionDidPresent:(BOOL)a0;
- (void)_delegateWillBeginUserInteraction;
- (void).cxx_destruct;
- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (void)resetForInitialInteraction;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (BOOL)_delegateShouldAllowLongPressGesture;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_delegateContainerView;
- (void)_clickPresentationTransitionDidDismiss:(BOOL)a0;
- (id)_delegatePresentedViewController;
- (id)initWithPresentingViewController:(id)a0 delegate:(id)a1;
- (id)_delegateTransitioningDelegate;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)a0;
- (BOOL)dismissIfPossible:(id /* block */)a0;
- (void)_delegateDidEndUserInteraction;

@end
