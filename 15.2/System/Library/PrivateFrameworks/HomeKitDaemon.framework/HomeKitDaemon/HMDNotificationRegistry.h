@class HMFTimer, NSString, NSMutableDictionary, NSHashTable, NSMutableSet, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_notificationRegistry;
    NSHashTable *_delegates;
    HMFTimer *_pendingRequestsRetryTimer;
    NSMutableSet *_pendingRequests;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addDelegate:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)a0;
- (void)clearAllRegistrations;
- (id)filterProperties:(id)a0 forUser:(id)a1;
- (id)usersRegisteredForNotificationsForProperties:(id)a0;
- (id)filterCharacteristics:(id)a0 forUser:(id)a1;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)a0;
- (void)removeRegistrationsForCharacteristics:(id)a0;
- (BOOL)removeRegistrationsForMediaProfile:(id)a0;
- (BOOL)setNotificationsEnabled:(BOOL)a0 forUserID:(id)a1 characteristicsPayload:(id)a2 mediaPropertiesPayload:(id)a3;
- (BOOL)disableReachabilityEventNotificationForAccessoryUUIDs:(id)a0 forUserID:(id)a1;
- (BOOL)enableReachabilityEventNotificationForAccessoryUUIDs:(id)a0 forUserID:(id)a1;
- (void)auditUsersForNotifications:(id)a0 forHome:(id)a1;
- (id)initWithPendingRequestsRetryTimer:(id)a0;
- (id)userIDsRegisteredForReachabilityEventNotificationsForAccessoryUUIDs:(id)a0;
- (void)removeAllReachabilityEventNotificationRegistrations;

@end
