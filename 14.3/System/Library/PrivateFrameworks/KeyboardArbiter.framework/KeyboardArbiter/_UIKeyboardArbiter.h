@class NSString, FBSSceneLayer, FBSWorkspace, FBSSceneIdentityToken, BKSApplicationStateMonitor, _UIKeyboardArbiterHandle, NSObject, _UIKeyboardChangedInformation, NSXPCListener, NSMutableArray, FBSScene;
@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    _UIKeyboardArbiterHandle *_previouslyActiveHandle;
    int _currentFocusPID;
    FBSSceneIdentityToken *_currentFocusSceneIdentity;
    _UIKeyboardArbiterHandle *_keyboardFocusHandle;
    FBSWorkspace *_workspace;
    FBSScene *_scene;
    int _updateCounter;
    BKSApplicationStateMonitor *_stateMonitor;
    long long _lastEventSource;
    FBSSceneLayer *_sceneLayer;
    _UIKeyboardArbiterHandle *_disablingHandle;
}

@property (retain, nonatomic) _UIKeyboardChangedInformation *lastUpdate;
@property (readonly, weak) _UIKeyboardArbiterHandle *activeHandle;
@property (readonly, weak) _UIKeyboardArbiterHandle *commandFocusHandle;
@property (readonly, nonatomic) id<_UIKeyboardArbiterLink> sceneLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateKeyboardStatus:(id)a0 fromHandler:(id)a1;
- (void)checkHostingState;
- (id)initWithLink:(id)a0;
- (void)runOperations:(id /* block */)a0 onHandler:(id)a1;
- (id)remoteSceneIdentity;
- (void)handleUnexpectedDeallocForHandler:(id)a0;
- (void)completeKeyboardStatusChangedFromHandler:(id)a0;
- (void)reevaluateHardwareKeyboardClient;
- (void).cxx_destruct;
- (void)setKeyboardTotalDisable:(BOOL)a0 withFence:(id)a1 fromHandler:(id)a2 completionHandler:(id /* block */)a3;
- (id)_descriptionWithScene:(BOOL)a0;
- (void)scheduleWindowTimeout;
- (void)reevaluateSceneClientSettings;
- (void)_findForHandle:(id)a0 deepestHandleHandler:(id /* block */)a1;
- (void)dealloc;
- (void)retrieveDebugInformationWithCompletion:(id /* block */)a0;
- (BOOL)activateHandle:(id)a0;
- (void)updateSceneClientSettings:(id)a0;
- (id)handlerForBundleID:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)processWithPID:(int)a0 foreground:(BOOL)a1 suspended:(BOOL)a2;
- (void)attemptConnection;
- (void)activateClients;
- (void)setSuppressionCount:(int)a0 ofPIDs:(id)a1;
- (void)transition:(id)a0 eventStage:(unsigned long long)a1 withInfo:(id)a2 fromHandler:(id)a3;
- (void)resume;
- (void)newClientConnected:(id)a0 withExpectedState:(id)a1 onConnected:(id /* block */)a2;
- (void)updateKeyboardSceneSettings;
- (void)captureStateForDebug;
- (id)handlerForToken:(id)a0;
- (void)_findForHandle:(id)a0 deepestHandleHandler:(id /* block */)a1 checklist:(id)a2;
- (BOOL)deactivateHandle:(id)a0;
- (void)notifyHeightUpdated:(id)a0;
- (void)updateInterestedBundleIDs;
- (void)signalEventSourceChanged:(long long)a0 fromHandler:(id)a1 completionHandler:(id /* block */)a2;
- (id)handlerForPID:(int)a0;
- (void)updateSuppression:(BOOL)a0 ofPIDs:(id)a1;
- (void)handlerRequestedFocus:(id)a0 shouldStealKeyboard:(BOOL)a1;
- (void)updateSuppression:(BOOL)a0 ofPID:(id)a1;
- (void)retrieveClientDebugInformationWithCompletion:(id /* block */)a0;

@end
