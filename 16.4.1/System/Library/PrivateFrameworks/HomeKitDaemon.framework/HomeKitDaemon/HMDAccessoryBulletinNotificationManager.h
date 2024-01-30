@class HMDHome, HMDAppleAccountManager, HMFTimer, NSArray, NSString, NSObject, HMDBulletinNotificationRegistrationSource, NSNotificationCenter, HMDNotificationConditionEvaluator;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBulletinNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property BOOL currentPrimary;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly) NSArray *serviceRegistrationsForCurrentDevice;
@property (readonly) NSArray *accessoryRegistrations;
@property (readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_characteristicBulletinRegistrationsForSource:(id)a0 context:(id)a1;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (id)_characteristicsWithPassingLocalRegistrationForCharacteristics:(id)a0;
- (id)_accessoryRegistrationFromMKFRegistrationSafe:(id)a0;
- (id)_currentHomeAccessoryUUIDs;
- (id)_devicesToNotifyForCharacteristic:(id)a0;
- (void)_handleAccessoryBulletinNotificationRegistration:(id)a0 removed:(BOOL)a1;
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)a0;
- (void)_handleDeviceBecameNotPrimary;
- (void)_handleDeviceBecamePrimary;
- (void)_handlePrimaryResidentUpdateNotification:(id)a0;
- (id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)a0;
- (id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)a0;
- (void)_requestSynchronizeRegistrations;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (id)_updateReasonsByCharacteristicFromMessage:(id)a0;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)a0 disabledRegistrations:(id)a1;
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)a0;
- (id)bulletinBoardNotificationForService:(id)a0;
- (id)bulletinCharacteristicsFromChangedCharacteristics:(id)a0 message:(id)a1;
- (id)characteristicsByDestinationForCharacteristics:(id)a0;
- (id)conditionsFromPredicate:(id)a0;
- (void)configureWithDeviceIsResidentCapable:(BOOL)a0;
- (void)disableBulletinForService:(id)a0 completion:(id /* block */)a1;
- (void)enableBulletinForService:(id)a0 conditions:(id)a1 completion:(id /* block */)a2;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)a0;
- (void)handleDisabledRegistrations:(id)a0;
- (void)handleEnabledRegistrations:(id)a0;
- (void)handleRemovedService:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1 accountManager:(id)a2 evaluator:(id)a3 notificationCenter:(id)a4;
- (void)updateRegistrationsWithEnabledCharacteristics:(id)a0 disabledCharacteristics:(id)a1 conditions:(id)a2 completion:(id /* block */)a3;

@end
