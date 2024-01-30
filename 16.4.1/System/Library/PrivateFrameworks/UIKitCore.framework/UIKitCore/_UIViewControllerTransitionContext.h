@class NSArray, NSString, _UIViewControllerTransitionCoordinator, UIView;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {
    double _previousPercentComplete;
    NSArray *_disabledViews;
    struct { unsigned char interactorImplementsCompletionSpeed : 1; unsigned char interactorImplementsCompletionCurve : 1; unsigned char transitionWasCancelled : 1; unsigned char transitionIsCompleting : 1; unsigned char transitionIsInterruptible : 1; } _transitionContextFlags;
    id<UIViewControllerAnimatedTransitioning> __animator;
    UIView *_containerView;
}

@property (nonatomic, getter=_initiallyInteractive, setter=_setInitiallyInteractive:) BOOL initiallyInteractive;
@property (nonatomic, getter=isCurrentlyInteractive, setter=_setCurrentlyInteractive:) BOOL currentlyInteractive;
@property (nonatomic, getter=isInterruptible, setter=_setInterruptible:) BOOL interruptible;
@property (nonatomic, setter=_setCompletionVelocity:) double _completionVelocity;
@property (nonatomic, setter=_setCompletionCurve:) long long _completionCurve;
@property (nonatomic, setter=_setTransitionIsCompleting:) BOOL _transitionIsCompleting;
@property (retain, nonatomic, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator *_auxContext;
@property (nonatomic, setter=_setState:) long long _state;
@property (copy, nonatomic, setter=_setInteractiveUpdateHandler:) id /* block */ _interactiveUpdateHandler;
@property (copy, nonatomic, setter=_setPostInteractiveCompletionHandler:) id /* block */ _postInteractiveCompletionHandler;
@property (nonatomic, setter=_setPresentationStyle:) long long presentationStyle;
@property (nonatomic, setter=_setIsPresentation:) BOOL _isPresentation;
@property (retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews;
@property (nonatomic, setter=_setPercentOffset:) double _percentOffset;
@property (weak, nonatomic, setter=_setAnimator:) id<UIViewControllerAnimatedTransitioning> _animator;
@property (weak, nonatomic, setter=_setInteractor:) id<UIViewControllerInteractiveTransitioning> _interactor;
@property (nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) BOOL _allowUserInteraction;
@property (nonatomic, getter=_isRotating, setter=_setRotating:) BOOL rotating;
@property (readonly, nonatomic, getter=_affineTransform) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } affineTransform;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic, setter=_setDuration:) double _duration;
@property (copy, nonatomic, setter=_setWillCompleteHandler:) id /* block */ _willCompleteHandler;
@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (copy, nonatomic, setter=_setDidCompleteHandler:) id /* block */ _didCompleteHandler;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_associatedTransitionContextForObject:(id)a0;

- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)a0;
- (void)_setTransitionIsInFlight:(BOOL)a0;
- (void)cancelInteractiveTransition;
- (void)__runAlongsideAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (void)_stopInteractiveTransition;
- (id)viewControllerForKey:(id)a0;
- (void)pauseInteractiveTransition;
- (BOOL)initiallyInteractive;
- (double)_previousPercentComplete;
- (void)_runAlongsideCompletions;
- (void)updateInteractiveTransition:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)finishInteractiveTransition;
- (void)_setIsAnimated:(BOOL)a0;
- (void)_setContainerView:(id)a0;
- (void)completeTransition:(BOOL)a0;
- (BOOL)_transitionIsInFlight;
- (void)setTransitionWasCancelled:(BOOL)a0;
- (void)_interactivityDidChange:(BOOL)a0;
- (id)viewForKey:(id)a0;
- (void)dealloc;
- (void)_disableInteractionForViews:(id)a0;
- (id)init;
- (void)_setPreviousPercentComplete:(double)a0;
- (void)_enableInteractionForDisabledViews;
- (long long)_alongsideAnimationsCount;
- (id)_transitionCoordinator;
- (void).cxx_destruct;

@end
