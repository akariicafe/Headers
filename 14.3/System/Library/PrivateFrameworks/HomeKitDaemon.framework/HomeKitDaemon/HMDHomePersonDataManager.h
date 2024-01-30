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
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)removeCloudData;
- (void)handleUpdatedSettingsModel:(id)a0 previousSettingsModel:(id)a1 message:(id)a2;
- (id)initWithHome:(id)a0 workQueue:(id)a1;
- (id)updateSettingsModelWithSettings:(id)a0;
- (void)handleFetchSettingsMessage:(id)a0;
- (void)handleUpdateSettingsMessage:(id)a0;
- (void)configurePersonManager;

@end
