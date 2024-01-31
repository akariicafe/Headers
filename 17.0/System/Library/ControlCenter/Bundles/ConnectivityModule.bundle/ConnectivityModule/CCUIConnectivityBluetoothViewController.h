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

- (int)_currentState;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (id)init;
- (void)_bluetoothConnectionStatusDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (id)_glyphStateForState:(int)a0;
- (id)_debugDescriptionForState:(int)a0;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (void)_updateConnectedDeviceNames;
- (BOOL)_inoperativeForState:(int)a0;
- (id)_subtitleTextWithState:(int)a0;
- (void)_toggleState;
- (void)stopObservingStateChanges;
- (void)contentModuleDetailClickPresentationInteractionController:(id)a0 requestsAuthenticationForPresentationWithCompletionHandler:(id /* block */)a1;
- (BOOL)_useAlternateSelectedBackgroundForState:(int)a0;
- (BOOL)_enabledForState:(int)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (int)_stateWithOverridesApplied:(int)a0;
- (void)_updateWithState:(int)a0;
- (void).cxx_destruct;
- (id)_menuGlyphStateForState:(int)a0;
- (void)_presentBehaviorPromptWithCompletion:(id /* block */)a0;
- (id)displayName;
- (BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)a0;
- (void)_bluetoothStateDidChange:(id)a0;

@end
