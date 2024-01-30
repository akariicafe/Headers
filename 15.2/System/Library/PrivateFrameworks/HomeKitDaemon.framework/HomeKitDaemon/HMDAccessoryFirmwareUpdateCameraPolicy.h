@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy

+ (id)logCategory;

- (void)configure;
- (BOOL)isEqual:(id)a0;
- (void)registerForNotifications;
- (BOOL)evaluate;
- (unsigned long long)hash;
- (void)handleAccessoryConnectedNotification:(id)a0;
- (void)handleAccessoryDisconnectedNotification:(id)a0;
- (void)monitorStreamStatus:(BOOL)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)_handleStreamStatusCharacteristicChanges;
- (void)handleSettingsChange:(id)a0;
- (void)_checkStreamingStatus;
- (void)_handleStreamStatusMultireadResponse:(id)a0;
- (void)_processStreamingStatus:(id)a0;

@end
