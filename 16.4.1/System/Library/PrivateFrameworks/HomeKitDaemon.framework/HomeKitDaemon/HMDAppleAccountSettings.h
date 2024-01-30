@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) BOOL supportsCloudSettings;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isEducationMode) BOOL educationMode;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) BOOL migrated;
@property (readonly, getter=isHomeEnabled) BOOL homeEnabled;
@property (readonly, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly, getter=isManaged) BOOL managed;
@property (readonly, getter=isEphemeral) BOOL ephemeral;

+ (id)sharedSettings;
+ (id)logCategory;

- (void)synchronize;
- (id)init;
- (id)attributeDescriptions;
- (void)__synchronize;
- (void).cxx_destruct;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__updateHomeEnabled:(BOOL)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_notifyClientsOfUpdatedHomeState:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)a0;
- (void)enableHome:(BOOL)a0 userInitiated:(BOOL)a1;
- (void)handleManateeAvailabilityNotification:(id)a0;
- (void)updateHomeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
