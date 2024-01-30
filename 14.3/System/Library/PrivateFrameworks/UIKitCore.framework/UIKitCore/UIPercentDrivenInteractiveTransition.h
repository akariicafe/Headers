@class NSString, NSUUID;
@protocol UIViewImplicitlyAnimating, UITimingCurveProvider;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    double _duration;
    BOOL _didCommitAnimations;
    id<UIViewImplicitlyAnimating> _interruptibleAnimator;
    NSUUID *_animationTrackingAnimatorUUID;
}

@property (retain, nonatomic, setter=_setOriginalFillMode:) NSString *_originalFillMode;
@property (retain, nonatomic, setter=_setUuid:) NSUUID *_uuid;
@property (nonatomic, getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:) BOOL _transitionInterrupted;
@property (readonly) double duration;
@property (readonly) double percentComplete;
@property (nonatomic) double completionSpeed;
@property (nonatomic) long long completionCurve;
@property (retain, nonatomic) id<UITimingCurveProvider> timingCurve;
@property (nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0 containerViews:(id)a1 animation:(id /* block */)a2;
- (void)startInteractiveTransition:(id)a0;
- (BOOL)_startInterruptibleTransition:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_continueInterruptibleTransition:(id)a0 reverse:(BOOL)a1;
- (void)_updateInteractiveTransition:(id)a0 percent:(double)a1 isFinished:(BOOL)a2 didComplete:(BOOL)a3;
- (void)finishInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (BOOL)_useAnimatorTrackingToDriveTransition;
- (void)_resetInteractionController;
- (void)_stopInteractiveTransition:(id)a0;
- (void)_stopInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)_setDuration:(double)a0;

@end
