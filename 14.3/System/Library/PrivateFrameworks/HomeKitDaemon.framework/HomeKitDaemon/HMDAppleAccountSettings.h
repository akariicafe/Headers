@class NSString, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
}

@property (class, readonly) BOOL supportsCloudSettings;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isEducationMode) BOOL educationMode;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) BOOL migrated;
@property (nonatomic) int circleChangedNotificationToken;
@property (nonatomic) int viewMembershipChangedNotificationToken;
@property (readonly, getter=isHomeEnabled) BOOL homeEnabled;
@property (readonly, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly, getter=isManaged) BOOL managed;
@property (readonly, getter=isEphemeral) BOOL ephemeral;

+ (id)logCategory;
+ (id)sharedSettings;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeDescriptions;
- (void)synchronize;
- (void)__synchronize;
- (void)_notifyClientsOfUpdatedHomeState:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)a0;
- (void)__updateHomeEnabled:(BOOL)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)enableHome:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)updateHomeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
