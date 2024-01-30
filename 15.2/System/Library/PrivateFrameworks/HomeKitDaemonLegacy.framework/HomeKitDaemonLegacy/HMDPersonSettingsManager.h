@class HMBLocalZone, HMFMessageDispatcher, NSUUID, HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDPersonSettingsManager : HMFObject <HMFMessageReceiver, HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)remove;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (id)initWithHome:(id)a0 localZone:(id)a1 workQueue:(id)a2;
- (BOOL)areClassificationNotificationsEnabledForPersonUUID:(id)a0;
- (void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)a0;
- (void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)a0;
- (id)_setClassificationNotificationsEnabled:(id)a0 forPersonUUID:(id)a1;

@end
