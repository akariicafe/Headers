@class NSString, NSHashTable, SBKeyboardHomeAffordanceAssertion, SBHomeGrabberRotationView;

@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMainDisplaySceneManagerObserverPrivate> {
    NSHashTable *_assertions;
    SBHomeGrabberRotationView *_homeGrabberView;
    BOOL _isHomeGrabberContainingViewAlwaysPortrait;
    SBKeyboardHomeAffordanceAssertion *_topMostAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateHomeAffordance;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (void)sceneManagerUsingMedusaHostedKeyboardWindowDidChange:(id)a0;
- (void)_updateTopMostAssertion;
- (void)_getHomeGrabberContainingView:(id *)a0 isAlwaysPortrait:(BOOL *)a1;
- (void)registerAssertion:(id)a0;
- (void)unregisterAssertion:(id)a0;
- (void)_didChangeAdditionalEdgeMarginForAssertion:(id)a0;

@end
