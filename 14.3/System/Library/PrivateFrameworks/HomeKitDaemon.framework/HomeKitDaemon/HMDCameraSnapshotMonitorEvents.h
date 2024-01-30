@class NSUUID, HMDHAPAccessory, NSString, HMDNotificationRegistration, NSSet, HMFMessageDispatcher, HMDCameraSnapshotManager, NSMutableSet, NSObject, HMDCharacteristicsAvailabilityListener, _HMCameraUserSettings;
@protocol OS_dispatch_queue, HMDCameraBulletinBoard;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate, HMDCharacteristicsAvailabilityListenerDelegate>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, copy) _HMCameraUserSettings *currentCameraSettings;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly, weak) HMDCameraSnapshotManager *snapshotManager;
@property (retain) NSMutableSet *snapShotNotificationResponseTimers;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSString *bulletinImagesDirectory;
@property (readonly) NSString *logID;
@property (readonly) id<HMDCameraBulletinBoard> bulletinBoard;
@property (readonly) HMDNotificationRegistration *notificationRegistration;
@property (retain) NSSet *bulletinSnapshotCharacteristics;
@property (retain) NSSet *proactiveSnapshotCharacterisitics;
@property (retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)isDoorbellServiceInputCharacteristic:(id)a0;
+ (BOOL)isMotionServiceDetectedCharacteristic:(id)a0;

- (void).cxx_destruct;
- (void)registerForMessages;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)__handleCharacteristicsChangedPayload:(id)a0;
- (void)handleBulletinNotificationEnableStateDidChange:(id)a0;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (void)handleRemoteNotificationGenerated:(id)a0;
- (void)handleCameraSettingsDidUpdateNotification:(id)a0;
- (void)_enableNotificationsForCharacteristics:(id)a0 cameraSettings:(id)a1;
- (BOOL)_canEnableNotificationForCharacteristic:(id)a0 cameraSettings:(id)a1;
- (void)_handleUpdatedBulletinSnapshotCharacteristics:(id)a0;
- (void)_handleUpdatedProactiveSnapshotCharacteristics:(id)a0;
- (void)_handleHomedRelaunchRegistration:(id)a0 updatedCharacteristics:(id)a1;
- (void)_handleBulletinNotificationEnableStateDidChange:(id)a0;
- (void)_characteristicsUpdated:(id)a0 modifiedCharacteristics:(id)a1;
- (void)_handleSnapshotResponse:(id)a0 cameraSessionID:(id)a1 changedCharacteristics:(id)a2 response:(id)a3 responseTimer:(id)a4;
- (void)_insertUpdateOrRemoveBulletins:(id)a0 forChangedCharacteristics:(id)a1 snapshotData:(id)a2;
- (void)_sendReleaseSnapshot:(id)a0;
- (void)processPostedBulletin:(id)a0 responseTimer:(id)a1;
- (void)_removeBulletins:(id)a0 sessionID:(id)a1;
- (void)_handleRemoteNotification:(id)a0;
- (id)initWithSnapshotManager:(id)a0 accessory:(id)a1 workQueue:(id)a2 msgDispatcher:(id)a3;

@end
