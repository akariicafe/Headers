@class HMIExternalPersonManager, NSUUID, HMFMessageDispatcher, NSString, HMIHomePersonManager, NSObject, HMDActiveXPCClientConnectionsPeriodicTimer;
@protocol OS_dispatch_queue, HMDPersonDataSource;

@interface HMDHomeKitPersonDataReceiver : HMFObject <HMFLogging, HMFMessageReceiver, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDPersonDataReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (copy) id /* block */ fetchServerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) HMIExternalPersonManager *photosPersonManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2;
- (void)configureWithDataSource:(id)a0 home:(id)a1;
- (void)handleUpdatedPerson:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedUnassociatedFaceCrop:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedPersonFaceCrop:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedFaceprint:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedPersonWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedFaceCropWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedFaceprintWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedSettings:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleFetchSettingsMessage:(id)a0;
- (void)clientConnectionsTimerDidFire:(id)a0;
- (void)handleSubscribeMessage:(id)a0;
- (void)handleUnsubscribeMessage:(id)a0;
- (void)handlePerformCloudPullMessage:(id)a0;
- (void)handleUpdateSettingsMessage:(id)a0;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2 clientConnectionsTimer:(id)a3;
- (void)handleFetchPersonsMessage:(id)a0;
- (void)handleFetchFaceCropsMessage:(id)a0;
- (void)handleFetchPersonFaceCropsMessage:(id)a0;
- (void)handleFetchUnassociatedFaceCropsMessage:(id)a0;
- (void)handleFetchFaceprintsMessage:(id)a0;
- (void)handleAddOrUpdatePersonsMessage:(id)a0;
- (void)handleAddOrUpdateFaceCropsMessage:(id)a0;
- (void)handleAddOrUpdateFaceprintsMessage:(id)a0;
- (void)handleAssociateFaceCropsMessage:(id)a0;
- (void)handleDisassociateFaceCropsMessage:(id)a0;
- (void)handleRemovePersonsMessage:(id)a0;
- (void)handleRemoveFaceCropsMessage:(id)a0;
- (void)handleRemoveFaceprintsMessage:(id)a0;
- (void)_notifySubscribersOfMessageWithName:(id)a0 payload:(id)a1;
- (void)_performCloudPull;

@end
