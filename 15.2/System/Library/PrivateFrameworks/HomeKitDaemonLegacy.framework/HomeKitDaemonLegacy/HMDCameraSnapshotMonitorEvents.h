@class NSUUID, NSString, HMDHAPAccessory, NSSet, HMDNotificationRegistration, HMDCameraSnapshotManager, HMFMessageDispatcher, NSObject, HMDCharacteristicsAvailabilityListener, NSMutableSet;
@protocol OS_dispatch_queue, HMDCameraBulletinBoard;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMFTimerDelegate, HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate, HMDHomeMessageReceiver> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDHAPAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    id<HMDCameraBulletinBoard> _bulletinBoard;
    HMDNotificationRegistration *_notificationRegistration;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly) NSString *logIdentifier;
@property (readonly) NSUUID *uniqueIdentifier;
@property (copy) NSSet *bulletinSnapshotCharacteristics;
@property (retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerForMessages;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (id)initWithSnapshotManager:(id)a0 accessory:(id)a1 workQueue:(id)a2 msgDispatcher:(id)a3;
- (void)handleBulletinBoardNotificationDidUpdateNotification:(id)a0;
- (void)handleCameraSettingsDidUpdateNotification:(id)a0;

@end
