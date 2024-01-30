@class NSString, HMFMessageDispatcher, NSUUID, HMDHome, NSURL, HMCContext, NSObject;
@protocol OS_dispatch_queue, HMDPersonSettingsManagerDependencyFactory;

@interface HMDPersonSettingsManager : HMFObject <HMFMessageReceiver, HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) HMCContext *backingStoreContext;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDPersonSettingsManagerDependencyFactory> dependencyFactory;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSURL *personSettingsManagerMigrationFileURL;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_allowedClassesForMigrationSettings;

- (void)configure;
- (void)remove;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)a0;
- (void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)a0;
- (id)_setClassificationNotificationsEnabled:(id)a0 forPersonUUID:(id)a1;
- (BOOL)areClassificationNotificationsEnabledForPersonUUID:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1;
- (id)_localPersonClassificationSettings;
- (void)_maybeMigrateSettings;
- (void)_removeMigrationSettingsFileFromDisk;
- (void)_setClassificationNotificationsEnabled:(BOOL)a0 personUUID:(id)a1 settings:(id)a2;
- (id)initWithHome:(id)a0 backingStoreContext:(id)a1 dependencyFactory:(id)a2 workQueue:(id)a3;

@end
