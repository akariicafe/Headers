@class NSObject, HMFSoftwareVersion, NSString, NSNotificationCenter, HMDHAPAccessory, HMDService;
@protocol OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdateProfile : NSObject <HMFLogging>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly, weak) HMDService *service;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long updateDuration;
@property (nonatomic) long long updateState;
@property (nonatomic) unsigned long long stagingNotReadyReasons;
@property (nonatomic) unsigned long long updateNotReadyReasons;
@property (retain, nonatomic) HMFSoftwareVersion *stagedFirmwareVersion;
@property (nonatomic, getter=isReadinessNotificationEnabled) BOOL readinessNotificationEnabled;
@property (nonatomic, getter=isStatusNotificationEnabled) BOOL statusNotificationEnabled;
@property (readonly, nonatomic, getter=isReadyForStaging) BOOL readyForStaging;
@property (readonly, nonatomic, getter=isReadyToApplyUpdate) BOOL readyToApplyUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (id)initWithAccessory:(id)a0 service:(id)a1 workQueue:(id)a2;
- (void)handleAccessoryConnected:(id)a0;
- (void)monitorReadiness:(BOOL)a0;
- (void)monitorStatus:(BOOL)a0;
- (void)__handleAccessoryConnected;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)_enableReadinessNotification:(BOOL)a0 readAfterEnable:(BOOL)a1;
- (id)readinessCharacteristic;
- (void)readAndProcessCharacteristics:(id)a0;
- (id)statusCharacteristics;
- (id)firmwareVersionCharacterstic;
- (void)__handleFirmwareUpdateStatusUpdate:(id)a0;
- (void)__handleFirmwareUpdateReadinessUpdate:(id)a0;
- (void)__handleStagedFirmwareVersionUpdate:(id)a0;
- (void)_updateFirmwareUpdateState:(long long)a0;
- (void)_updateFirmwareUpdateDuration:(unsigned long long)a0;
- (void)_updateStagedFirmwareVersion:(id)a0;
- (void)_updateFirmwareStagingNotReadyReasons:(unsigned long long)a0;
- (void)_updateFirmwareUpdateNotReadyReasons:(unsigned long long)a0;

@end
