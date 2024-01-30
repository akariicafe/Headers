@class NSUUID, HMDHomePersonManager, HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomePersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *homeUUID;
@property (weak) HMDHome *home;
@property (retain) HMDHomePersonManager *personManager;
@property (copy) id /* block */ personManagerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)updateSettingsModelWithSettings:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1;
- (void)handleUpdatedSettingsModel:(id)a0 previousSettingsModel:(id)a1 message:(id)a2;
- (void)removeCloudData;
- (void)configurePersonManager;
- (void)handleUpdateSettingsMessage:(id)a0;

@end
