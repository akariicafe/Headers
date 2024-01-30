@class NSString, FBSSceneSettings, FBWorkspace, FBSSceneSpecification, NSMutableArray, FBSSerialQueue, FBSSceneClientSettings, FBProcess;
@protocol FBSceneHost, FBSSceneHostAgent;

@interface FBWorkspaceScene : NSObject <FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_group;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSMutableArray *_lock_sceneCreatedBlocks;
    BOOL _lock_sentSceneCreate;
    BOOL _fromRemnant;
    BOOL _lock_invalidated;
    id<FBSSceneHostAgent> _hostAgent;
    NSMutableArray *_agentSessions;
    FBProcess *_process;
    FBSSerialQueue *_workspaceQueue;
    unsigned char _lock_lifecycleState;
}

@property (readonly, weak, nonatomic) FBWorkspace *parentWorkspace;
@property (readonly, weak, nonatomic) id<FBSceneHost> host;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostProcess;
- (id)callOutQueue;
- (id)parameters;
- (id)clientProcess;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)a0 executionPolicy:(id)a1;
- (id)sessionForIdentifier:(id)a0;
- (void)closeSession:(id)a0;
- (void)agent:(id)a0 registerMessageHandler:(id /* block */)a1;
- (void)agent:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_workspaceQueue_handleDidUpdateSettings:(id)a0 withDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)_workspaceQueue_handleInvalidationWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithParentWorkspace:(id)a0 host:(id)a1;
- (void)_workspaceQueue_invalidate;
- (void)invalidate;
- (void)configureFromRemnant:(BOOL)a0 withSpecification:(id)a1 settings:(id)a2 initialClientSettings:(id)a3;
- (void)_workspaceQueue_sendUpdateToClient:(id)a0 settingsDiff:(id)a1 transitionContext:(id)a2 responseEventHandler:(id /* block */)a3;
- (void)_workspaceQueue_sendMessageToClient:(id /* block */)a0;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)a0;

@end
