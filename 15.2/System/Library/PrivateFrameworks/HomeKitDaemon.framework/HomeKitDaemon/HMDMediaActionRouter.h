@class NSObject, NSUUID, NSString, HMDHome, HMDMPCSessionController, HMDResidentDevice;
@protocol OS_dispatch_queue, HMDMediaActionRouterDataSource;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>

@property (readonly, weak, nonatomic) id<HMDMediaActionRouterDataSource> dataSource;
@property (readonly, nonatomic) BOOL shouldExecuteOnCurrentDevice;
@property (weak, nonatomic) HMDResidentDevice *targetResidentDeviceOverride;
@property (readonly, nonatomic) HMDMPCSessionController *mpcSessionController;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_registerForMessages;
- (id)mediaProfileWithUUID:(id)a0;
- (void)routeMediaActionForExecution:(id)a0 source:(unsigned long long)a1 clientName:(id)a2 completion:(id /* block */)a3;
- (void)routeSessionDataForExecution:(id)a0 encodePlaybackArchive:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)a0 encodePlaybackArchive:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendMediaActionMessageToResident:(id)a0 sessionData:(id)a1 encodePlaybackArchive:(BOOL)a2 completion:(id /* block */)a3;
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)a0 encodePlaybackArchive:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendMediaActionMessageToDevice:(id)a0 sessionData:(id)a1 encodePlaybackArchive:(BOOL)a2 canForwardMessage:(BOOL)a3 completion:(id /* block */)a4;
- (void)routeMessage:(id)a0;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)a0;
- (void)executeMediaActionWithSessionData:(id)a0 completion:(id /* block */)a1;

@end
