@class NSUUID, HMFMessageDispatcher, HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue, HMDHomeLockNotificationManagerDataSource;

@interface HMDHomeLockNotificationManager : HMFObject <HMFMessageReceiver, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *uuid;
@property (weak) HMDHome *home;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) id<HMDHomeLockNotificationManagerDataSource> dataSource;
@property (readonly) BOOL hasReachablePrimaryResidentSupportingLockNotificationContext;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_resolveKeypadContextIdentifier:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (void)_sendResolveLockNotificationContextIdentifierMessage:(id)a0 accessoryUUID:(id)a1 withCompletion:(id /* block */)a2;
- (void)configureWithHome:(id)a0;
- (id)contextResolutionResultFromAccessCode:(id)a0;
- (id)contextResolutionResultFromHAPContextId:(id)a0;
- (id)contextResolutionResultFromNFCContextId:(id)a0;
- (id)displayNameForNotificationContextResolutionResult:(id)a0;
- (void)handleResolveNotificationContextIdentifierMessage:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 dataSource:(id)a2;
- (void)resolveEncodedCharacteristicNotificationContext:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (void)resolveKeypadContextIdentifier:(id)a0 accessoryUUID:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)shouldResolveNotificationContextForCharacteristic:(id)a0;

@end
