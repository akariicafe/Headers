@class NSString, NSMutableDictionary, FBSceneManager, UIApplicationSceneDeactivationManager, NSMutableSet;

@interface SBSceneManagerCoordinator : NSObject <FBSceneManagerDelegate_Private, FBSceneManagerObserver, FBSceneDelegate, FBProcessManagerObserver, FBWorkspaceDelegate, FBSDisplayObserving, SBSceneManagerReferenceDelegate, BLSSceneDelegateWithActionHandlers> {
    FBSceneManager *_sceneManager;
    NSMutableDictionary *_displayIdentityToReferenceMap;
    NSMutableSet *_workspaceIdentifiersToIgnore;
}

@property (readonly, nonatomic) UIApplicationSceneDeactivationManager *sceneDeactivationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)mainDisplaySceneManager;
+ (id)secureMainDisplaySceneManager;

- (void)sceneManager:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (id)sceneManager:(id)a0 createDefaultTransitionContextForScene:(id)a1;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 scene:(id)a1 didReceiveActions:(id)a2;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (void)sceneManager:(id)a0 interceptUpdateForScene:(id)a1 withNewSettings:(id)a2;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)processManager:(id)a0 didAddProcess:(id)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (id)sceneManagerForPersistenceIdentifier:(id)a0;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)_createSceneForApplication:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)processManager:(id)a0 didRemoveProcess:(id)a1;
- (id)_newLayoutStateSceneIdentityProviderWithDisplayIdentity:(id)a0;
- (id)_referenceForDisplayIdentity:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)enumerateSceneManagersWithBlock:(id /* block */)a0;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)registerSceneWorkspaceIdentifierToIgnore:(id)a0;
- (void)dealloc;
- (id)_sceneManagerForDisplayIdentity:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)removeActionHandler:(id)a0 forScene:(id)a1;
- (void)workspace:(id)a0 didReceiveSceneRequestWithOptions:(id)a1 completion:(id /* block */)a2;
- (void)addActionHandler:(id)a0 forScene:(id)a1;
- (id)sceneManagerForDisplayIdentity:(id)a0;
- (id)init;
- (id)_newSceneIdentityProviderWithDisplayIdentity:(id)a0;
- (void).cxx_destruct;
- (void)sceneManagerDidInvalidateForReference:(id)a0;

@end
