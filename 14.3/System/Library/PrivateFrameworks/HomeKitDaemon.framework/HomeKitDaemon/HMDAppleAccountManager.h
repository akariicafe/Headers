@class HMDAccount, APSConnection, NSObject, HMFExponentialBackoffTimer, IDSService, HMDAppleAccountContext, HMDAppleAccountSettings, NSString, HMDIDSActivityMonitorBroadcaster, HMDDevice, HMDBackingStore, HMDCloudCache, HMFUnfairLock, ACAccountStore, HMFTimer, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountManager : HMFObject <APSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, IDSServiceDelegate> {
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) APSConnection *pushConnection;
@property (readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer;
@property (readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) int rapportIdentitiesChangedNotificationToken;
@property (nonatomic, getter=isRapportIdentitiesChangedNotificationTokenValid) BOOL rapportIdentitiesChangedNotificationTokenValid;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (retain) HMDAccount *account;
@property (readonly) HMDAppleAccountContext *accountContext;
@property (retain, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) HMDCloudCache *cloudCache;
@property (readonly) HMDDevice *device;
@property (readonly, nonatomic) HMDAppleAccountSettings *settings;
@property (readonly) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)sharedManager;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void).cxx_destruct;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)start;
- (void)account:(id)a0 aliasesChanged:(id)a1;
- (BOOL)shouldCacheAccount:(id)a0;
- (id)primaryHandleForAccount:(id)a0;
- (BOOL)shouldSyncAccount:(id)a0;
- (BOOL)shouldSyncDevice:(id)a0;
- (BOOL)shouldAccount:(id)a0 pushbackModel:(id)a1 actions:(id)a2;
- (id)initWithIDSService:(id)a0 activityBroadcaster:(id)a1;
- (void)_registerForRapportNotifications;
- (void)_deregisterForRapportNotifications;
- (BOOL)shouldDevice:(id)a0 processModel:(id)a1 actions:(id)a2;
- (void)__localDataReset:(id)a0;
- (void)__handleModifiedAccount:(id)a0;
- (void)__handleRemovedAccount:(id)a0;
- (void)__handleUpdatedName:(id)a0;
- (void)__handleMigrationUpdated:(id)a0;
- (void)__deviceAddedToCurrentAccount:(id)a0;
- (void)__deviceRemovedFromCurrentAccount:(id)a0;
- (BOOL)isModelCurrentAccount:(id)a0;
- (void)processAccountModel:(id)a0 message:(id)a1;
- (void)processAccountModelRemove:(id)a0 message:(id)a1;

@end
