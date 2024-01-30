@class NSHashTable, NSString, BSServiceConnectionEndpoint, FBSWorkspace, BSServiceQuality, BSServiceConnection, NSMutableDictionary, FBSSerialQueue, NSObject, NSMutableArray;
@protocol FBSWorkspaceDelegate, BSServiceConnectionClient, NSCopying, OS_dispatch_queue;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource> {
    FBSWorkspace *_workspace;
    id<FBSWorkspaceDelegate> _workspaceDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    BSServiceConnectionEndpoint *_endpoint;
    NSMutableDictionary *_scenesByIdentifier;
    NSMutableDictionary *_clientSettingsByIdentifier;
    NSHashTable *_reconnectingScenes;
    NSMutableArray *_pendedSendBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportingLock;
    NSMutableDictionary *_reportingLock_scenesByIdentifier;
    BOOL _activated;
}

@property (class, readonly, nonatomic) BSServiceQuality *serviceQuality;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

- (id)sceneWithIdentifier:(id)a0;
- (id)callOutQueue;
- (id)scenes;
- (oneway void)reconnectWithSceneID:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)queue_activate;
- (id)_queue_connectedSceneWithIdentifier:(id)a0;
- (void)_configureReceivedActions:(id)a0 forScene:(id)a1;
- (oneway void)sceneID:(id)a0 updateWithSettingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)hostProcess;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (oneway void)createWithSceneID:(id)a0 groupID:(id)a1 parameters:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)_reportedSceneWithIdentifier:(id)a0;
- (oneway void)sceneID:(id)a0 destroyWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (id)endpoint;
- (void).cxx_destruct;
- (id)init;
- (oneway void)sceneID:(id)a0 sendActions:(id)a1;
- (id)initWithEndpoint:(id)a0 queue:(id)a1 calloutQueue:(id)a2 workspace:(id)a3;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_queue_sendHandshake;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)_queue_updateScene:(id)a0 withSettings:(id)a1 diff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (oneway void)sendActions:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (id)_remoteTarget;
- (oneway void)willTerminateWithTransitionContext:(id)a0;
- (void)_queue_invalidateScene:(id)a0 withTransitionContext:(id)a1 completion:(id /* block */)a2;

@end
