@class NSMutableDictionary, NSString, HMDHome, NSHashTable, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMDNotificationRegistry : HMFObject <HMFLogging, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *notificationRegistry;
@property (copy) NSHashTable *delegates;
@property (readonly, weak) HMDHome *home;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)keyForCharacteristic:(id)a0;
+ (id)_createCharacteristicsMapForCharacteristics:(id)a0;
+ (id)keyForProperty:(id)a0 mediaProfile:(id)a1;
+ (BOOL)doesKey:(id)a0 matchMediaProfile:(id)a1;
+ (id)_reachabilityEventNotificationRegistryKeyForAccessoryUUID:(id)a0;
+ (id)_reachabilityEventNotificationRegistryKeysForAccessoryUUIDs:(id)a0;

- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)a0;
- (void)auditUsersForNotifications:(id)a0 forHome:(id)a1;
- (BOOL)enableReachabilityEventNotificationForAccessoryUUIDs:(id)a0 forUserID:(id)a1;
- (BOOL)disableReachabilityEventNotificationForAccessoryUUIDs:(id)a0 forUserID:(id)a1;
- (BOOL)enableNotificationForCharacteristics:(id)a0 forUser:(id)a1;
- (BOOL)disableNotificationForCharacteristics:(id)a0 forUser:(id)a1 characteristicsToDisableEvents:(id *)a2;
- (BOOL)enableNotificationForProperties:(id)a0 forUser:(id)a1;
- (BOOL)disableNotificationForProperties:(id)a0 forUser:(id)a1;
- (BOOL)removeRegistrationsForMediaProfile:(id)a0;
- (id)filterCharacteristics:(id)a0 forUser:(id)a1;
- (id)usersRegisteredForNotificationsForProperties:(id)a0;
- (id)filterProperties:(id)a0 forUser:(id)a1;
- (void)clearAllRegistrations;
- (void)notifyDelegatesOfRegistryUpdates;
- (void)disableNotification:(id)a0 user:(id)a1 ignoreLockReq:(BOOL)a2 home:(id)a3;
- (id)_delayedBlocksCollectedWhileDeregisteringUsers:(id)a0 forHome:(id)a1 isiOS:(BOOL)a2 isResident:(BOOL)a3;
- (BOOL)removeRegistrationsForCharacteristic:(id)a0;
- (id)allCharacteristicIdentifiers;
- (void)deregisterUsers:(id)a0 forHome:(id)a1;
- (id)userIDsRegisteredForReachabilityEventNotificationsForAccessoryUUIDs:(id)a0;
- (void)removeAllReachabilityEventNotificationRegistrations;

@end
