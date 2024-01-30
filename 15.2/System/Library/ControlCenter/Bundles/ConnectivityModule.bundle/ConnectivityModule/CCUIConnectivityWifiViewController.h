@class NSString, WFControlCenterStateMonitor, CCUIContentModuleDetailClickPresentationInteractionManager;

@interface CCUIConnectivityWifiViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {
    WFControlCenterStateMonitor *_stateMonitor;
    CCUIContentModuleDetailClickPresentationInteractionManager *_clickPresentationInteractionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayName;
- (long long)_currentState;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (id)_glyphStateForState:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateWithState:(long long)a0;
- (void)stopObservingStateChanges;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)_inoperativeForState:(long long)a0;
- (BOOL)_enabledForState:(long long)a0;
- (void)buttonTapped:(id)a0;
- (id)_subtitleTextWithState:(long long)a0;
- (BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)a0;
- (void)_presentBehaviorPromptWithCompletion:(id /* block */)a0;
- (id)_debugDescriptionForState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startObservingStateChanges;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (void)_toggleState;
- (long long)_stateWithOverridesApplied:(long long)a0;
- (BOOL)_useAlternateSelectedBackgroundForState:(long long)a0;
- (void)_updateState;
- (id)_menuGlyphStateForState:(long long)a0;

@end
