@class NSString, WFControlCenterStateMonitor, CCUIContentModuleDetailClickPresentationInteractionManager;

@interface CCUIConnectivityWifiViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {
    WFControlCenterStateMonitor *_stateMonitor;
    CCUIContentModuleDetailClickPresentationInteractionManager *_clickPresentationInteractionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_currentState;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (id)_glyphStateForState:(long long)a0;
- (id)_debugDescriptionForState:(long long)a0;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (BOOL)_inoperativeForState:(long long)a0;
- (id)_subtitleTextWithState:(long long)a0;
- (void)_toggleState;
- (void)stopObservingStateChanges;
- (void)contentModuleDetailClickPresentationInteractionController:(id)a0 requestsAuthenticationForPresentationWithCompletionHandler:(id /* block */)a1;
- (BOOL)_useAlternateSelectedBackgroundForState:(long long)a0;
- (BOOL)_enabledForState:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (long long)_stateWithOverridesApplied:(long long)a0;
- (void)_updateWithState:(long long)a0;
- (void).cxx_destruct;
- (id)_menuGlyphStateForState:(long long)a0;
- (void)_presentBehaviorPromptWithCompletion:(id /* block */)a0;
- (id)displayName;
- (BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)a0;

@end
