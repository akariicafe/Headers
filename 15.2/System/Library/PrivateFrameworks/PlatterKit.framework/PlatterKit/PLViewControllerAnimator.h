@class NSString, NSPointerArray, UIViewPropertyAnimator, UIView;

@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    UIView *_sourceView;
    NSPointerArray *_observers;
    BOOL _didPrepareForTransition;
}

@property (class, readonly, nonatomic) BOOL drivesAnimation;

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic) BOOL includePresentingViewInAnimation;
@property (nonatomic) BOOL runAlongsideAnimationsManually;
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)a0;
- (id)_newPropertyAnimator;
- (id)initForPresentation:(BOOL)a0 withSourceView:(id)a1;
- (id)_presentingViewForPresentation:(BOOL)a0 withTransitionContext:(id)a1;
- (id)_presentedViewControllerForPresentation:(BOOL)a0 withTransitionContext:(id)a1;
- (id)_presentedViewForPresentation:(BOOL)a0 withTransitionContext:(id)a1;
- (id)_presentedExpandedPlatterForPresentedView:(id)a0;
- (id)_previewInteractionPresentableViewControllerForPresentation:(BOOL)a0 withTransitionContext:(id)a1;
- (void)_performTransitionWithContext:(id)a0;
- (void)performTransitionWithContext:(id)a0;
- (void)prepareForTransitionWithContext:(id)a0;
- (void)_animateTransitionWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isTransitionAnimated;
- (id)_sourceViewForPresentation:(BOOL)a0 withTransitionContext:(id)a1;
- (id)_presentingViewControllerForPresentation:(BOOL)a0 withTransitionContext:(id)a1;

@end
