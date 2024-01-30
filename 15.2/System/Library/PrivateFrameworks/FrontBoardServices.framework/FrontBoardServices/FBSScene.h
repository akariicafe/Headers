@class NSString, FBSSceneSettings, FBSSceneDefinition, FBSSceneIdentityToken, NSOrderedSet, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, FBSSceneClientSettings;
@protocol FBSSceneDelegate, FBSSceneUpdater, FBSSceneClientAgent;

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding> {
    FBSSerialQueue *_callOutQueue;
    NSString *_identifier;
    FBSSceneDefinition *_definition;
    BOOL _hasAgent;
    id<FBSSceneClientAgent> _callOutQueue_agent;
    NSMutableArray *_callOutQueue_agentSessions;
    id /* block */ _callOutQueue_agentMessageHandler;
    BOOL _callOutQueue_agentInvalidateCalled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<FBSSceneUpdater> _lock_updater;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSOrderedSet *_lock_layers;
    id<FBSSceneDelegate> _lock_delegate;
    FBSSceneIdentityToken *_identityToken;
}

@property (readonly, copy, nonatomic) NSString *_groupID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FBSSceneIdentityToken *identityToken;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (weak, nonatomic) id<FBSSceneDelegate> delegate;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canHaveAgent;

- (id)contexts;
- (id)callOutQueue;
- (BOOL)_hasAgent;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)layers;
- (BOOL)invalidateSnapshotWithContext:(id)a0;
- (void)sendActions:(id)a0;
- (id)succinctDescription;
- (id)hostProcess;
- (void)agent:(id)a0 registerMessageHandler:(id /* block */)a1;
- (void)closeSession:(id)a0;
- (id)_group;
- (id)parameters;
- (void)updateClientSettings:(id)a0 withTransitionContext:(id)a1;
- (void)attachContext:(id)a0;
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)a0 withTransitionContext:(id)a1;
- (void)attachSceneContext:(id)a0;
- (void)detachSceneContext:(id)a0;
- (id)snapshotRequest;
- (void)_callOutQueue_invalidateAgent;
- (void)updater:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (void)updater:(id)a0 didReceiveActions:(id)a1;
- (void)updater:(id)a0 didReceiveMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)_callOutQueue_invalidate;
- (id)_initWithUpdater:(id)a0 sceneID:(id)a1 groupID:(id)a2 specification:(id)a3 settings:(id)a4 initialClientSettings:(id)a5;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (void)attachLayer:(id)a0;
- (void)detachLayer:(id)a0;
- (id)fbsDisplay;
- (BOOL)snapshotRequest:(id)a0 performWithContext:(id)a1;
- (id)definition;
- (void).cxx_destruct;
- (id)init;
- (id)clientProcess;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettingsWithBlock:(id /* block */)a0;
- (BOOL)performSnapshotWithContext:(id)a0;
- (void)agent:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (id)display;
- (void)detachContext:(id)a0;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)a0 executionPolicy:(id)a1;
- (BOOL)snapshotRequestAllowSnapshot:(id)a0;

@end
