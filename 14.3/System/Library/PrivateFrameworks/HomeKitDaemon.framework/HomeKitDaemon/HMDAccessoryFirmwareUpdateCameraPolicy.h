@class NSString, HMDHAPAccessory;

@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (BOOL)isEqual:(id)a0;
- (void)handleAccessoryConnectedNotification:(id)a0;
- (void)handleAccessoryDisconnectedNotification:(id)a0;
- (void)handleSettingsChange:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)monitorStreamStatus:(BOOL)a0;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)_processStreamingStatus:(id)a0;
- (void)_handleStreamStatusMultireadResponse:(id)a0;
- (void)_checkStreamingStatus;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;

@end
