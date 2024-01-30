@class NSString, UIViewController, SBLockScreenViewControllerBase;
@protocol SBLockScreenContentStateProviding, SBIdleTimerProviding, SBLockScreenStatusBarTransitioning, SBLockScreenCallHandling, SBLockScreenSpotlightPresenting, SBButtonEventsHandler, SBAutoUnlockRule, SBLockScreenBehaviorSuppressing, SBApplicationHosting, SBLockScreenPluginPresenting, SBLockScreenButtonObserving, SBLockScreenBacklightControlling, SBLockScreenIdleTimerControlling, SBLockScreenPasscodeViewPresenting, SBFScreenWakeAnimationTarget, SBSWidgetMetricsProviding, SBLockScreenProximityBehaviorProviding, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenCustomActionStoring, SBBiometricUnlockBehavior, SBLockScreenApplicationLaunching, SBLockScreenBlockedStateObserving;

@interface SBLegacyLockScreenEnvironment : NSObject <BSDescriptionProviding, SBLockScreenEnvironment> {
    SBLockScreenViewControllerBase *_lockScreenViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) id<SBAutoUnlockRule> autoUnlockRule;
@property (readonly, nonatomic) id<SBBiometricUnlockBehavior> biometricUnlockBehavior;
@property (readonly, nonatomic) id<SBButtonEventsHandler> buttonEventsHandler;
@property (readonly, nonatomic) id<SBApplicationHosting> applicationHoster;
@property (readonly, nonatomic) id<SBIdleTimerProviding> idleTimerProvider;
@property (readonly, nonatomic) id<SBFScreenWakeAnimationTarget> screenWakeAnimationTarget;
@property (readonly, nonatomic) id<SBLockScreenApplicationLaunching> applicationLauncher;
@property (readonly, nonatomic) id<SBLockScreenBacklightControlling> backlightController;
@property (readonly, nonatomic) id<SBLockScreenBehaviorSuppressing> behaviorSuppressor;
@property (readonly, nonatomic) id<SBLockScreenBlockedStateObserving> blockedStateObserver;
@property (readonly, nonatomic) id<SBLockScreenButtonObserving> buttonObserver;
@property (readonly, nonatomic) id<SBLockScreenCallHandling> callController;
@property (readonly, nonatomic) id<SBLockScreenContentStateProviding> contentStateProvider;
@property (readonly, nonatomic) id<SBLockScreenCustomActionStoring> customActionStore;
@property (readonly, nonatomic) id<SBLockScreenIdleTimerControlling> idleTimerController;
@property (readonly, nonatomic) id<SBLockScreenLockingAndUnlocking> lockController;
@property (readonly, nonatomic) id<SBLockScreenMediaControlsPresenting> mediaControlsPresenter;
@property (readonly, nonatomic) id<SBLockScreenPasscodeViewPresenting> passcodeViewPresenter;
@property (readonly, nonatomic) id<SBLockScreenPluginPresenting> pluginPresenter;
@property (readonly, nonatomic) id<SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider;
@property (readonly, nonatomic) id<SBLockScreenStatusBarTransitioning> statusBarTransitionController;
@property (readonly, nonatomic) id<SBSWidgetMetricsProviding> widgetMetricsProvider;
@property (readonly, nonatomic) id<SBLockScreenSpotlightPresenting> spotlightPresenter;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithLockScreenViewController:(id)a0;

@end
