@class NSString, FBSceneClientProviderInvalidationAction, NSMutableDictionary, NSMutableArray, NSObject;
@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProviderInternal, FBSceneClientProvider> {
    BOOL _workspaceInitialized;
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_localSceneInfoByIdentifier;
    NSMutableDictionary *_hostsByIdentifier;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)sceneWithIdentifier:(id)a0;
- (void)unregisterHost:(id)a0;
- (id)callOutQueue;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)a0 transitionContext:(id)a1;
- (id)scenes;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (id)hostProcess;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)endpoint;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)host:(id)a0 didReceiveActions:(id)a1;
- (id)fbsSceneWithIdentifier:(id)a0;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;
- (void)registerInvalidationAction:(id)a0;

@end
