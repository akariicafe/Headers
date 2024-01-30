@class NSString, FBSSceneSettings, FBSSceneIdentityToken, NSOrderedSet, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, FBSSceneClientSettings;
@protocol FBSSceneDelegate, FBSSceneUpdater, FBSSceneClientAgent;

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding> {
    FBSSerialQueue *_callOutQueue;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
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

- (id)hostProcess;
- (id)callOutQueue;
- (id)layers;
- (id)parameters;
- (id)clientProcess;
- (id)init;
- (void)updateClientSettingsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)a0 withTransitionContext:(id)a1;
- (void)updateClientSettings:(id)a0 withTransitionContext:(id)a1;
- (void)attachSceneContext:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)detachSceneContext:(id)a0;
- (id)snapshotRequest;
- (void)_callOutQueue_invalidateAgent;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)a0 executionPolicy:(id)a1;
- (id)sessionForIdentifier:(id)a0;
- (void)closeSession:(id)a0;
- (void)agent:(id)a0 registerMessageHandler:(id /* block */)a1;
- (void)agent:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)updater:(id)a0 didReceiveActions:(id)a1;
- (void)sendActions:(id)a0;
- (void)updater:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (void)updater:(id)a0 didReceiveMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)_callOutQueue_invalidate;
- (id)_initWithUpdater:(id)a0 sceneID:(id)a1 groupID:(id)a2 specification:(id)a3 settings:(id)a4 initialClientSettings:(id)a5;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (id)display;
- (void)detachContext:(id)a0;
- (void)attachContext:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)snapshotRequest:(id)a0 performWithContext:(id)a1;
- (id)contexts;
- (id)succinctDescriptionBuilder;
- (id)fbsDisplay;
- (void)attachLayer:(id)a0;
- (void)detachLayer:(id)a0;
- (BOOL)snapshotRequestAllowSnapshot:(id)a0;
- (BOOL)performSnapshotWithContext:(id)a0;
- (BOOL)invalidateSnapshotWithContext:(id)a0;
- (BOOL)_hasAgent;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)a0;

@end
