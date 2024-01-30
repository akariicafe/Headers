@class HMFTimer, NSString, HMDNotificationRegistryCoreDataAdapter, NSHashTable, NSMutableSet, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_delegates;
    HMDNotificationRegistryCoreDataAdapter *_coreDataAdapter;
    HMFTimer *_pendingRequestsRetryTimer;
    NSMutableSet *_pendingRequests;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)shortDescription;
- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clearAllRegistrations;
- (void)configureWithHome:(id)a0;
- (id)initWithPendingRequestsRetryTimer:(id)a0;
- (id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)a0;
- (void)removeRegistrationsForCharacteristics:(id)a0;
- (BOOL)removeRegistrationsForMediaProfile:(id)a0;
- (void)auditNotificationDestinations:(id)a0 home:(id)a1;
- (void)clearAllremoteRegistrations;
- (void)configureWithHome:(id)a0 coreDataAdapter:(id)a1;
- (id)destinationsRegisteredForNotificationsForCharacteristics:(id)a0;
- (id)destinationsRegisteredForNotificationsForProperties:(id)a0;
- (id)filterCharacteristics:(id)a0 deviceIdsDestination:(id)a1;
- (id)filterProperties:(id)a0 deviceIdsDestination:(id)a1;
- (BOOL)setNotificationsEnabled:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 characteristicsPayload:(id)a3 mediaPropertiesPayload:(id)a4;

@end
