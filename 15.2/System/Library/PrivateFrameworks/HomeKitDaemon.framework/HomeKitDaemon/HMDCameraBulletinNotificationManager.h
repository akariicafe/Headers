@class HMDAppleAccountManager, NSMutableDictionary, NSUUID, HMFMessageDispatcher, NSObject, HMDCameraSignificantEventFaceClassificationResolver, HMDCameraSignificantEventNotificationDebouncer, NSManagedObjectContext, NSString, HMDNotificationConditionEvaluator, HMCContext, HMDDoorbellPressTracker, HMDHome, HMDAccountRegistry, NSNotificationCenter, NSArray;
@protocol OS_dispatch_queue;

@interface HMDCameraBulletinNotificationManager : HMFObject <HMFMessageReceiver, HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSManagedObjectContext *localMOC;
@property (readonly) HMCContext *workingMOC;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSMutableDictionary *observersByCameraIdentifier;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver;
@property (readonly) HMDAccountRegistry *accountRegistry;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCameraSignificantEventNotificationDebouncer *notificationDebouncer;
@property (readonly) HMDDoorbellPressTracker *doorbellPressTracker;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property BOOL currentPrimary;
@property (readonly) NSArray *cameraSignificantEventRegistrations;
@property (readonly) NSArray *cameraSignificantEventRegistrationsForCurrentDevice;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 workQueue:(id)a1 localManagedObjectContext:(id)a2 workingManagedObjectContext:(id)a3 messageDispatcher:(id)a4 accountRegistry:(id)a5 accountManager:(id)a6 faceClassificationResolver:(id)a7 notificationDebouncer:(id)a8 doorbellPressTracker:(id)a9 evaluator:(id)a10;
- (void)configureWithDeviceIsResidentCapable:(BOOL)a0;
- (id)conditionsFromPredicate:(id)a0;
- (id)cameraUserNotificationSettingsForAccessory:(id)a0;
- (void)updateNotificationRegistrationsWithSettings:(id)a0 accessory:(id)a1 doorbellPressNotificationEnabled:(BOOL)a2 doorbellPressNotificationPredicate:(id)a3 completion:(id /* block */)a4;
- (id)cameraSignificantEventBulletinNotificationRegistrationsForCameraIdentifier:(id)a0;
- (id)cameraReachabilityBulletinNotificationRegistrationsForAccessory:(id)a0;
- (id)devicesToNotifyForCameraReachabilityForAccessory:(id)a0;
- (void)handleSignificantEvent:(id)a0 cameraProfile:(id)a1 homePresence:(id)a2;
- (void)addCameraSignificantEventNotificationObserver:(id)a0 cameraIdentifier:(id)a1;
- (void)removeCameraSignificantEventNotificationObserver:(id)a0 cameraIdentifier:(id)a1;
- (void)_handleSignificantEvent:(id)a0 cameraProfile:(id)a1 homePresence:(id)a2;
- (BOOL)_filterPassesForCameraSignificantEvent:(id)a0 registration:(id)a1;
- (void)_notifyPrimaryResidentOfSignificantEvent:(id)a0 remoteDeviceIdentifier:(id)a1 notificationModes:(unsigned long long)a2;
- (void)_handleSignificantEvent:(id)a0 remoteDeviceIdentifier:(id)a1 notificationModes:(unsigned long long)a2;
- (void)_notifyDevice:(id)a0 aboutSignificantEvent:(id)a1;
- (void)_handleCameraSignificantEventBulletinNotificationRegistration:(id)a0 removed:(BOOL)a1;
- (void)_handleDeviceBecamePrimary;
- (void)_handleDeviceBecameNotPrimary;
- (id)_recentDoorbellPressIntervalForSignificantEventDate:(id)a0;
- (void)_handleCameraSignificantEventNotificationMessage:(id)a0;
- (void)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;

@end
