@class HMDRemoteEventRouterPrimaryResidentClient, NSUUID, NSString, HMDUserMessagePolicy, NSMutableArray, NSObject, HMEDelegatingEventRouter;
@protocol OS_dispatch_queue, HMDHomeRemoteEventRouterClientControllerDataSource, HMDHomeRemoteEventRouterClientFactory;

@interface HMDHomeRemoteEventRouterClientController : NSObject <HMDRemoteEventRouterClientDataSource, HMEDelegatingEventRouterDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_messageTargetUUID;
    NSString *_requestMessageName;
    NSString *_updateMessageName;
    id<HMDHomeRemoteEventRouterClientControllerDataSource> _dataSource;
    HMDUserMessagePolicy *_clientUserMessagePolicy;
    id<HMDHomeRemoteEventRouterClientFactory> _routerClientFactory;
    HMDRemoteEventRouterPrimaryResidentClient *_remoteEventRouterPrimaryResidentClient;
    NSMutableArray *_residentClients;
    NSUUID *_currentAccessoryUUID;
}

@property (readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter;
@property (readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dumpStateDescription;
- (BOOL)isNetworkAvailable;
- (void).cxx_destruct;
- (id)client:(id)a0 forwardingTopicsForTopics:(id)a1;
- (id)delegatingRouter:(id)a0 filteredTopics:(id)a1 forRouter:(id)a2;
- (id)delegatingRouter:(id)a0 upstreamTopicsFor:(id)a1;
- (void)createResidentRouterForAccessoryUUID:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 requestMessageName:(id)a3 updateMessageName:(id)a4 clientUserMessagePolicy:(id)a5 currentAccessoryUUID:(id)a6 assertionController:(id)a7;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2 routerClientFactory:(id)a3 requestMessageName:(id)a4 updateMessageName:(id)a5 clientUserMessagePolicy:(id)a6 currentAccessoryUUID:(id)a7 assertionController:(id)a8 delegatingRouterFactory:(id /* block */)a9;
- (BOOL)isCurrentDevicePrimaryResident;
- (void)networkAvailabilityDidChange:(BOOL)a0;
- (id)primaryResidentChangeMonitorForRouterClient:(id)a0;
- (void)removeResidentRouterForAccessoryUUID:(id)a0;
- (id)routerClientMessageDestination:(id)a0 serverIdentifier:(out id *)a1;
- (id)routerClientPrimaryResidentDeviceIdentifier:(id)a0;
- (BOOL)routerClientShouldRestrictMessagingToLocalOnly:(id)a0;
- (BOOL)routerClientSupportsFragmentMessageForServerIdentifier:(id)a0;
- (void)updateCurrentAccessoryUUID:(id)a0;

@end
