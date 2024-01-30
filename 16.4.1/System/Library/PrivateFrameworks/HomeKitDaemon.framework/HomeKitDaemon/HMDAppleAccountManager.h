@class NSNotificationCenter, HMDAccount, ACAccountStore, NSUUID, NSObject, HMFFuture, HMFExponentialBackoffTimer, HMDAppleAccountContext, HMDAppleAccountSettings, HMDDevice, HMDBackingStore, HMDIDSActivityMonitorBroadcaster, NSString, HMDCloudCache, NSData, HMFPromise, HMFTimer, HMDAccountRegistry;
@protocol HMDIDSService, HMDACAccountStore, HMDAPSConnection, OS_dispatch_queue;

@interface HMDAppleAccountManager : HMFObject <HMDAPSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSServiceDelegate> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDBackingStore *_backingStore;
    id<HMDACAccountStore> _accountStore;
}

@property (class, readonly) HMDAppleAccountManager *sharedManager;

@property (readonly, nonatomic) id<HMDAPSConnection> pushConnection;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer;
@property (readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) int rapportIdentitiesChangedNotificationToken;
@property (nonatomic, getter=isRapportIdentitiesChangedNotificationTokenValid) BOOL rapportIdentitiesChangedNotificationTokenValid;
@property (retain, nonatomic) NSData *pendingPushToken;
@property (readonly, nonatomic) id<HMDIDSService> service;
@property (readonly, nonatomic) HMDIDSActivityMonitorBroadcaster *activityBroadcaster;
@property (retain) HMDAccount *account;
@property (readonly, nonatomic) HMFPromise *deviceAccountSettledPromise;
@property (readonly, nonatomic) HMFPromise *currentDeviceSettledPromise;
@property (readonly, nonatomic) HMFPromise *idsDevicesUpdatedPromise;
@property (readonly) HMDAppleAccountContext *accountContext;
@property (readonly) HMDBackingStore *backingStore;
@property (retain, nonatomic) HMDCloudCache *cloudCache;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, nonatomic) HMFFuture *deviceAccountSettled;
@property (readonly, nonatomic) HMFFuture *currentDeviceSettled;
@property (readonly, nonatomic) HMFFuture *idsDevicesUpdated;
@property (readonly) HMDDevice *device;
@property (readonly, nonatomic) HMDAppleAccountSettings *settings;
@property (readonly) ACAccountStore *accountStore;
@property (readonly, getter=isLoggedInToPrimaryAccount) BOOL loggedIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)account:(id)a0 isActiveChanged:(BOOL)a1;
- (void)timerDidFire:(id)a0;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)account:(id)a0 aliasesChanged:(id)a1;
- (void)__deviceAddedToCurrentAccount:(id)a0;
- (void)__deviceRemovedFromCurrentAccount:(id)a0;
- (void)__handleMigrationUpdated:(id)a0;
- (void)__handleModifiedAccount:(id)a0;
- (void)__handleRemovedAccount:(id)a0;
- (void)__handleUpdatedName:(id)a0;
- (void)__localDataReset:(id)a0;
- (void)__updateMergeIDOnAccount;
- (void)_deregisterForRapportNotifications;
- (void)_registerForRapportNotifications;
- (void)_updatePushToken:(id)a0;
- (void)configureWithBackingStore:(id)a0;
- (id)initWithIDSService:(id)a0 activityBroadcaster:(id)a1;
- (id)initWithIDSService:(id)a0 activityBroadcaster:(id)a1 dataSource:(id)a2;
- (BOOL)isCurrentDeviceDataOwnerForDevice:(id)a0;
- (BOOL)isModelCurrentAccount:(id)a0;
- (id)primaryHandleForAccount:(id)a0;
- (void)processAccountModel:(id)a0 message:(id)a1;
- (void)processAccountModelRemove:(id)a0 message:(id)a1;
- (BOOL)shouldAccount:(id)a0 pushbackModel:(id)a1 actions:(id)a2;
- (BOOL)shouldCacheAccount:(id)a0;
- (BOOL)shouldDevice:(id)a0 processModel:(id)a1 actions:(id)a2;
- (BOOL)shouldSyncAccount:(id)a0;
- (BOOL)shouldSyncDevice:(id)a0;
- (void)updateSenderCorrelationIdentifier:(id)a0;
- (void)configureWithAccountRegistry:(id)a0;
- (void)setAccountRegistry:(id)a0;

@end
