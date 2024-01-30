@class HMDAppleAccountManager, HMDNotificationConditionEvaluator, NSManagedObjectContext, NSArray, HMCContext, NSString, HMDAccountRegistry, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSManagedObjectContext *localMOC;
@property (readonly) HMCContext *workingMOC;
@property (readonly) HMDAccountRegistry *accountRegistry;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property BOOL currentPrimary;
@property (readonly) NSArray *accessoryRegistrations;
@property (readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)characteristicsByDestinationForCharacteristics:(id)a0;
- (void)unregisterForNotificationsFromCharacteristics:(id)a0 completion:(id /* block */)a1;
- (void)configureWithDeviceIsResidentCapable:(BOOL)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1 localManagedObjectContext:(id)a2 workingManagedObjectContext:(id)a3 accountRegistry:(id)a4 accountManager:(id)a5 evaluator:(id)a6;
- (void)registerForNotificationsFromCharacteristics:(id)a0 conditions:(id)a1 completion:(id /* block */)a2;
- (id)conditionsFromPredicate:(id)a0;
- (void)_handleDeviceBecamePrimary;
- (void)_handleDeviceBecameNotPrimary;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (id)bulletinBoardNotificationForCharacteristics:(id)a0;
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)a0;
- (id)_devicesToNotifyForCharacteristic:(id)a0;
- (void)_handleAccessoryBulletinNotificationRegistration:(id)a0 removed:(BOOL)a1;

@end
