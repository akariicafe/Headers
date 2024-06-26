@class UIView, NSString, BSBlockTransaction, NSSet, UIWindow, SBApplicationSceneEntity, NSMutableArray, SBAnimationStepper, SBViewControllerTransitionContext, BSAnimationSettings;
@protocol SBViewControllerTransitionCoordinator, SBUIAnimationControllerTransitionContextProvider;

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating> {
    NSSet *_sceneHandlesBeingObserved;
    NSSet *_entitiesToObserve;
    NSSet *_startTransactionDependencies;
    NSMutableArray *_coordinatingChildRelationships;
    NSMutableArray *_steppedCoordinatingChildAnimations;
    SBAnimationStepper *_stepper;
    UIWindow *_transitionWindow;
    int _animationState;
    BOOL _didNotifyObserversOfCompletion;
}

@property (retain, nonatomic) SBViewControllerTransitionContext *transition;
@property (retain, nonatomic) id<SBUIAnimationControllerTransitionContextProvider> transitionContextProvider;
@property (copy, nonatomic) id /* block */ animationTransactionCompletion;
@property (readonly, nonatomic) BSBlockTransaction *animationTransaction;
@property (readonly, nonatomic) BSBlockTransaction *notifyObserversTransaction;
@property (readonly, nonatomic) BSBlockTransaction *cleanupTransaction;
@property (nonatomic) BOOL needsCATransactionActivate;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly, nonatomic) BOOL transitionSupportsCancelling;
@property (readonly, nonatomic) BOOL transitionSupportsRestarting;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly, nonatomic) BOOL transitionWasRestarted;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) id<SBViewControllerTransitionCoordinator> transitionCoordinator;
@property (readonly, nonatomic) BSAnimationSettings *animationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly, nonatomic, getter=isStepped) BOOL stepped;
@property (nonatomic) double stepPercentage;

+ (void)_removeAlertItemsPendingReason:(id)a0;
+ (void)_addAlertItemsPendingReason:(id)a0;
+ (BOOL)isPendingAlertItemsWithReason:(id)a0;

- (void)__startAnimation;
- (id)_getTransitionWindow;
- (void)_didInterruptWithReason:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)_setHidden:(BOOL)a0;
- (void)_begin;
- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_willComplete;
- (BOOL)__wantsInitialProgressStateChange;
- (void)_startAnimation;
- (int)_animationState;
- (void)addObserver:(id)a0;
- (BOOL)isReasonableMomentToInterrupt;
- (BOOL)_canBeInterrupted;
- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (void)cancelTransition;
- (void)_setAnimationState:(int)a0;
- (void)restartTransition;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_prepareAnimation;
- (id)init;
- (void)transitionDidFinish:(id)a0;
- (BOOL)shouldResignActiveForAnimation;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (BOOL)isFluidSwitcherAnimationController;
- (id)_animationIdentifier;
- (BOOL)animating;
- (void)_addDebugLogCategory:(id)a0;
- (id)_transitionAnimator;
- (void)_abortAnimation;
- (void)__abortAnimation;
- (id)__alertItemsController;
- (BOOL)__animationShouldStart;
- (void)__cleanupAnimation;
- (void)__noteAnimationDidTerminate;
- (void)__reportAnimationCompletion;
- (id)__startTransactionDependencyForEntity:(id)a0;
- (void)_application:(id)a0 processStateDidChange:(id)a1;
- (void)_cleanupEntityObservers;
- (void)_entityObserverProgressDidChange:(id /* block */)a0 waitForSceneContentAvailableTransactionBlock:(id /* block */)a1;
- (void)_enumerateCoordinatingAnimationsWithBlock:(id /* block */)a0;
- (void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)a0 block:(id /* block */)a1;
- (void)_enumerateCoordinatingChildRelationshipsWithBlock:(id /* block */)a0;
- (BOOL)_isNullAnimation;
- (void)_noteAnimationDidFail;
- (void)_noteAnimationDidFinish;
- (void)_noteAnimationDidRevealApplication;
- (void)_notifyObserversOfAnimationCompletion;
- (void)_processStateDidChange:(id)a0;
- (id)_progressDependencies;
- (void)_registerEntityObserversIfNecessary;
- (void)_sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (id)_viewsForAnimationStepping;
- (BOOL)_willAnimate;
- (void)_willBeginWaitingForStartDependencies;
- (void)_willSetupStartDependencies;
- (void)addCoordinatingChildTransaction:(id)a0 withSchedulingPolicy:(unsigned long long)a1;
- (void)addSteppedCoordinatingChildAnimation:(id)a0;
- (id)coordinatingAnimationControllers;
- (void)delayAnimationUntilTransactionFinishes:(id)a0;
- (void)delayCleanupUntilTransactionFinishes:(id)a0;
- (void)enableSteppingWithAnimationSettings:(id)a0;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (BOOL)isFinishedAnimating;
- (void)stopDelayingAnimationForTransaction:(id)a0;
- (void)stopDelayingCleanupForTransaction:(id)a0;
- (BOOL)waitingToStart;

@end
