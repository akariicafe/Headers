@class NSHashTable, NSString, SBWorkspaceKeyboardFocusController, BSServiceConnectionListener, NSObject, SBSystemUIScenesCoordinator, FBServiceClientAuthenticator, NSMapTable;
@protocol OS_dispatch_queue;

@interface SBKeyboardFocusService : NSObject <SBSKeyboardFocusServiceClientToServerInterface, BSServiceConnectionListenerDelegate> {
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    SBSystemUIScenesCoordinator *_systemUIScenesCoordinator;
    NSHashTable *_focusRequestedScenes;
    BSServiceConnectionListener *_connectionListener;
    NSMapTable *_lock_additionalDeferringRulesByConnection;
    NSMapTable *_lock_externalSceneIdentitiesByConnection;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)setExternalSceneIdentities:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (oneway void)deferAdditionalEnvironments:(id)a0 whenSceneHasKeyboardFocus:(id)a1 pid:(id)a2;
- (oneway void)removeKeyboardFocusFromSceneIdentity:(id)a0 pid:(id)a1;
- (oneway void)requestKeyboardFocusForSceneIdentity:(id)a0 pid:(id)a1 completion:(id /* block */)a2;
- (oneway void)stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(id)a0 pid:(id)a1;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (void)_lock_updateExternalSceneIdentities;
- (id)_sceneForIdentity:(id)a0 inProcess:(int)a1;
- (id)initWithKeyboardFocusController:(id)a0 systemUIScenesCoordinator:(id)a1;

@end
