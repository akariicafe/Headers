@class NSUUID, NSString, HMFTimer, HMFMessageDispatcher, HMIHomePersonManager, NSObject, HMIExternalPersonManager, HMDResidentDeviceManager;
@protocol OS_dispatch_queue, HMDPersonDataSource;

@interface HMDRemotePersonDataMessenger : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDPersonDataReceiver>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDResidentDeviceManager *residentDeviceManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (retain) HMFTimer *notifyResidentsOfUpdatedDataDebounceTimer;
@property (copy) id /* block */ notifyResidentsOfUpdatedDataDebounceTimerFactory;
@property (readonly, copy) NSUUID *UUID;
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
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)configureWithDataSource:(id)a0 home:(id)a1;
- (void)handleUpdatedPerson:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedPersonFaceCrop:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedPersonWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleRemovedFaceCropWithUUID:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedSettings:(id)a0 mirrorOutputFuture:(id)a1;
- (id)initWithUUID:(id)a0 home:(id)a1 workQueue:(id)a2;
- (void)handlePerformCloudPullMessage:(id)a0;
- (id)initWithUUID:(id)a0 messageDispatcher:(id)a1 residentDeviceManager:(id)a2 workQueue:(id)a3;
- (void)_sendMessagesToNotifyResidentsOfUpdatedFaceClassificationDependentData;
- (void)_notifyResidentsOfUpdatedFaceClassificationDependentData;

@end
