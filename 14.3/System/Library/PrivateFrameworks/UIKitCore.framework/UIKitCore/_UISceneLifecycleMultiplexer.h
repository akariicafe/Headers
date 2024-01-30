@class UIScene, UIApplicationSceneSettings;

@interface _UISceneLifecycleMultiplexer : NSObject {
    UIScene *_uiSceneOfRecord;
    UIApplicationSceneSettings *_transitionalLifecycleState;
    struct { unsigned char completedLaunch : 1; unsigned char activatedOnce : 1; } _multiplexerFlags;
}

@property (class, readonly, nonatomic) UIScene *mostActiveScene;

@property (readonly, nonatomic) BOOL activatedOnce;
@property (readonly, nonatomic) BOOL lifecycleWantsUnnecessaryDelayForSceneDelivery;
@property (readonly, nonatomic) long long applicationState;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL suspendedEventsOnly;
@property (readonly, nonatomic) BOOL suspendedUnderLock;
@property (readonly, nonatomic) BOOL runningInTaskSwitcher;

+ (id)sharedInstance;
+ (id)_mostActiveSceneForApplicationState;
+ (long long)_compareLifecycleStateOfScene:(id)a0 toScene:(id)a1;
+ (id)_mostActiveSceneIncludingInternal:(BOOL)a0 withTest:(id /* block */)a1;
+ (id)mostActiveSceneWithTest:(id /* block */)a0;
+ (id)mostActiveWindowSceneOnScreen:(id)a0;
+ (void)configureInitialDeactivationReasons:(unsigned long long)a0;

- (void)forceExitWithTransitionContext:(id)a0 scene:(id)a1;
- (void)noteApplicationLaunchCompleted;
- (void).cxx_destruct;
- (BOOL)isTrackingScene:(id)a0;
- (void)_globalTestRelatedActivationActionsForFirstActivation:(BOOL)a0 foreground:(BOOL)a1 interfaceStyle:(long long)a2 transitionContext:(id)a3;
- (void)collectBackingStores;
- (BOOL)_prepareForClientSuspensionWithScene:(id)a0;
- (void)_evalTransitionToSettings:(id)a0 fromSettings:(id)a1 forceExit:(BOOL)a2 withTransitionStore:(struct { id x0; id x1; })a3;
- (void)completeApplicationLaunchWithFBSScene:(id)a0 transitionContext:(id)a1;
- (void)_performBlock:(id /* block */)a0 withApplicationOfDeactivationReasons:(unsigned long long)a1 fromReasons:(unsigned long long)a2;
- (void)uiScene:(id)a0 transitionedFromState:(id)a1 withTransitionContext:(id)a2;
- (id)initForAppSingleton:(id)a0;
- (void)_scheduleFirstCommit;

@end
