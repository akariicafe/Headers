@class CCUIContentModuleDetailClickPresentationInteractionManager, NSString, NSArray, CCUIContentModuleDetailTransitioningDelegate, BluetoothManager;

@interface CCUIConnectivityBluetoothViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {
    BluetoothManager *_bluetoothManager;
    NSArray *_connectedDeviceNames;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    CCUIContentModuleDetailClickPresentationInteractionManager *_clickPresentationInteractionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayName;
- (int)_currentState;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (id)_glyphStateForState:(int)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateWithState:(int)a0;
- (void)stopObservingStateChanges;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)_inoperativeForState:(int)a0;
- (BOOL)_enabledForState:(int)a0;
- (void)buttonTapped:(id)a0;
- (void)_bluetoothConnectionStatusDidChange:(id)a0;
- (id)_subtitleTextWithState:(int)a0;
- (BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)a0;
- (void)_presentBehaviorPromptWithCompletion:(id /* block */)a0;
- (id)_debugDescriptionForState:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startObservingStateChanges;
- (void)_updateConnectedDeviceNames;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (void)_toggleState;
- (void)contentModuleDetailClickPresentationInteractionController:(id)a0 requestsAuthenticationForPresentationWithCompletionHandler:(id /* block */)a1;
- (int)_stateWithOverridesApplied:(int)a0;
- (void)_bluetoothStateDidChange:(id)a0;
- (BOOL)_useAlternateSelectedBackgroundForState:(int)a0;
- (void)_updateState;
- (id)_menuGlyphStateForState:(int)a0;

@end
