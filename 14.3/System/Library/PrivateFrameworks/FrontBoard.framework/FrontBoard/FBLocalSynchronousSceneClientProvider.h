@class NSString, FBSceneClientProviderInvalidationAction, NSMutableDictionary, NSMutableArray, NSObject;
@protocol NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProvider> {
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

- (id)hostProcess;
- (id)endpoint;
- (id)callOutQueue;
- (id)init;
- (void).cxx_destruct;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)registerHost:(id)a0 withSpecification:(id)a1 settings:(id)a2 initialClientSettings:(id)a3 fromRemnant:(id)a4;
- (id)fbsSceneWithIdentifier:(id)a0;
- (void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)a0 transitionContext:(id)a1;
- (void)registerInvalidationAction:(id)a0;
- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (id)sceneWithIdentifier:(id)a0;
- (id)_init;
- (id)scenes;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (void)host:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)unregisterHost:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;

@end
