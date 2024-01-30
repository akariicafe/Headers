@class UINavigationBar, NSMutableArray;
@protocol _UINavigationBarDelegatePrivate, UIViewControllerTransitionCoordinator;

@interface _UINavigationBarTransitionAssistant : NSObject {
    long long _animationCount;
}

@property (readonly, weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator;
@property (readonly, weak, nonatomic) UINavigationBar *navigationBar;
@property (readonly, weak, nonatomic) id<_UINavigationBarDelegatePrivate> delegate;
@property (readonly, nonatomic) int transition;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL interruptable;
@property (readonly, nonatomic) BOOL interactive;
@property (nonatomic) BOOL needsLifetimeExtended;
@property (readonly, nonatomic) BOOL shouldAnimateAlongside;
@property (readonly, nonatomic) BOOL shouldCrossfade;
@property (readonly, nonatomic) BOOL cancelledTransition;
@property (readonly, nonatomic) BOOL cancelledCleanUp;
@property (nonatomic) BOOL shouldHideBackButtonDuringTransition;
@property (nonatomic) BOOL shouldUpdatePromptAfterTransition;
@property (readonly, nonatomic) NSMutableArray *animationIDs;

+ (id)popTransitionAssistantForNavigationBar:(id)a0 delegate:(id)a1 crossfade:(BOOL)a2;
+ (id)pushTransitionAssistantForNavigationBar:(id)a0 delegate:(id)a1 crossfade:(BOOL)a2;

- (void)_getPopDurationAndTransitionAlwaysCrossfade:(BOOL)a0;
- (void)updateInteractiveTransitionPercent:(double)a0;
- (void)finishTrackingInteractiveTransition;
- (void).cxx_destruct;
- (void)cancelInteractiveTransitionPercent:(double)a0 completionSpeed:(double)a1 completionCurve:(long long)a2;
- (void)decrementAnimationCount;
- (void)_finishTrackingAnimations;
- (void)_getTransitionCoordinator;
- (void)_getInteractive;
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(BOOL)a0;
- (void)_clearAnimationsWithDuration:(double)a0 curve:(long long)a1 reverse:(BOOL)a2;
- (void)incrementAnimationCount;
- (void)_startTrackingAnimations;
- (id)initWithNavigationBar:(id)a0 delegate:(id)a1;
- (void)startInteractiveTransition;
- (void)finishInteractiveTransitionPercent:(double)a0 completionSpeed:(double)a1 completionCurve:(long long)a2;

@end
