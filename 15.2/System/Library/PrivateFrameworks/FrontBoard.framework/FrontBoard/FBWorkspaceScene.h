@class NSString, FBSSceneSettings, FBWorkspace, FBSSceneDefinition, FBSSceneSpecification, NSMutableArray, FBSSerialQueue, FBSSceneClientSettings;
@protocol FBSceneHost, BSInvalidatable, FBSSceneHostAgent;

@interface FBWorkspaceScene : NSObject <FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    FBSSceneDefinition *_definition;
    NSString *_group;
    id<FBSSceneHostAgent> _hostAgent;
    NSMutableArray *_agentSessions;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSMutableArray *_lock_sceneCreatedBlocks;
    unsigned char _lock_lifecycleState;
    unsigned long long _queue_inFlightUpdateEvents;
    unsigned long long _queue_inFlightLifecycleEvents;
    unsigned long long _queue_inFlightUpdateAllowsThrottling;
    unsigned long long _queue_inFlightUpdateDisallowsThrottling;
    unsigned long long _queue_inFlightExternallyManagedEvents;
    unsigned char _queue_assertionState;
    id<BSInvalidatable> _queue_workspaceAssertion;
    char _queue_activityMode;
    BOOL _lock_sentSceneCreate;
    BOOL _fromRemnant;
    BOOL _lock_invalidated;
    BOOL _queue_invalidated;
    BOOL _queue_sentInvalidation;
    FBSSerialQueue *_workspaceQueue;
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

+ (unsigned char)_sceneActionForLifecycleFromState:(unsigned char)a0 toState:(unsigned char)a1;

- (id)callOutQueue;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)a0;
- (void)_workspaceQueue_incrementInFlightUpdatesForAction:(unsigned char)a0 allowThrottling:(BOOL)a1 externallyManaged:(BOOL)a2;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)a0;
- (id)succinctDescription;
- (void)_workspaceQueue_sendSceneUpdateToClient:(id)a0 settingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)hostProcess;
- (void)agent:(id)a0 registerMessageHandler:(id /* block */)a1;
- (void)closeSession:(id)a0;
- (id)parameters;
- (id)initWithWorkspace:(id)a0 host:(id)a1 settings:(id)a2 clientSettings:(id)a3 fromRemnant:(BOOL)a4;
- (id)definition;
- (void).cxx_destruct;
- (id)clientProcess;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)_workspaceQueue_decrementInFlightUpdatesForAction:(unsigned char)a0 allowThrottling:(BOOL)a1 externallyManaged:(BOOL)a2;
- (void)_workspaceQueue_invalidate;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)a0 transitionContext:(id)a1;
- (void)dealloc;
- (void)_workspaceQueue_sendMessageToClient:(id /* block */)a0;
- (void)_workspaceQueue_sendSceneCreateToClient:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)_workspaceQueue_updateAssertion;
- (void)agent:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (id)counterpartAgent;
- (id)openSessionWithName:(id)a0 executionPolicy:(id)a1;

@end
