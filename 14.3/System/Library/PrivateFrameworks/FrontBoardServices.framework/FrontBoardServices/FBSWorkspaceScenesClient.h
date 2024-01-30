@class NSHashTable, NSString, BSServiceConnectionEndpoint, FBSWorkspace, BSServiceQuality, BSServiceConnection, NSMutableDictionary, FBSSerialQueue, NSObject, NSMutableArray;
@protocol FBSWorkspaceDelegate, OS_dispatch_queue, NSCopying;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource> {
    FBSWorkspace *_workspace;
    id<FBSWorkspaceDelegate> _workspaceDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    BSServiceConnection *_connection;
    BSServiceConnectionEndpoint *_endpoint;
    NSMutableDictionary *_scenesByIdentifier;
    NSMutableDictionary *_clientSettingsByIdentifier;
    NSHashTable *_reconnectingScenes;
    NSMutableArray *_pendedSendBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportingLock;
    NSMutableDictionary *_reportingLock_scenesByIdentifier;
}

@property (class, readonly, nonatomic) BSServiceQuality *serviceQuality;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

- (id)hostProcess;
- (id)endpoint;
- (id)callOutQueue;
- (oneway void)sceneID:(id)a0 sendActions:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_updateScene:(id)a0 withSettings:(id)a1 diff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (oneway void)willTerminateWithTransitionContext:(id)a0;
- (oneway void)sceneID:(id)a0 updateWithSettingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)initWithEndpoint:(id)a0 queue:(id)a1 calloutQueue:(id)a2 workspace:(id)a3;
- (id)_reportedSceneWithIdentifier:(id)a0;
- (id)_queue_connectedSceneWithIdentifier:(id)a0;
- (oneway void)reconnectWithSceneID:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)sceneWithIdentifier:(id)a0;
- (oneway void)sceneID:(id)a0 destroyWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)_queue_invalidateScene:(id)a0 withTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)activate;
- (id)scenes;
- (oneway void)createWithSceneID:(id)a0 groupID:(id)a1 parameters:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (oneway void)sendActions:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 completion:(id /* block */)a2;
- (id)_remoteTarget;
- (void)_configureReceivedActions:(id)a0 forScene:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;

@end
