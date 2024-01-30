@class NSTimer, NSString, SBBannerManager, SBSceneManager, SBDeviceApplicationSceneHandle, SBSwitcherController, SBWindowScenePIPManager, NSMutableSet, UIApplicationSceneClientSettingsDiffInspector;
@protocol SBPIPStashTabSuppressionPolicyProviderObserver;

@interface SBPIPStashTabSuppressionPolicyProvider : NSObject <SBBannerManagerTransitionObserver, SBLayoutStateTransitionObserver, SBDeviceApplicationSceneHandleObserver, UIGestureRecognizerDelegate, SBUIActiveOrientationObserver> {
    NSMutableSet *_requestIdentifiersForPresentedExpanseBanners;
    BOOL _invalidated;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
}

@property (readonly, weak, nonatomic) SBBannerManager *bannerManager;
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager;
@property (readonly, weak, nonatomic) SBSwitcherController *switcherController;
@property (readonly, weak, nonatomic) SBWindowScenePIPManager *pipManager;
@property (nonatomic) BOOL stashTabCanBeHidden;
@property (weak, nonatomic) SBDeviceApplicationSceneHandle *sceneHandleToObserve;
@property (retain, nonatomic) NSTimer *reevaluatePolicyTimer;
@property (weak, nonatomic) id<SBPIPStashTabSuppressionPolicyProviderObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)_tapRecognized:(id)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)dealloc;
- (void)bannerManager:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)bannerManager:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)_reevaluatePolicy;
- (void)_resetReevaluatePolicyTimer;
- (void)_startTrackingPresentable:(id)a0;
- (void)_stopTrackingPresentable:(id)a0;
- (void)_updateSceneHandleToObserveForLayoutState:(id)a0;
- (id)initWithObserver:(id)a0 bannerManager:(id)a1 sceneManager:(id)a2 pipManager:(id)a3;

@end
