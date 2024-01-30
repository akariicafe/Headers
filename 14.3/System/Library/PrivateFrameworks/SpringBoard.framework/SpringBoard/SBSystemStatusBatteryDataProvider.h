@class NSString, STBatteryStatusDomainPublisher, BCBatteryDeviceController;

@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable>

@property (readonly, nonatomic) STBatteryStatusDomainPublisher *batteryDataPublisher;
@property (readonly, nonatomic) BCBatteryDeviceController *batteryDeviceController;
@property (nonatomic) BOOL shouldExposeNotChargingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)_updateShouldExposeNotChargingState;
- (void)dealloc;
- (void)_noteNotChargingStatusChanged;
- (BOOL)_isInNotChargingState;
- (void)_updateData;
- (void)connectedDevicesDidChange:(id)a0;
- (void)invalidate;

@end
