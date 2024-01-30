@class NSString, STBatteryStatusDomainPublisher, BCBatteryDeviceController;

@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable>

@property (readonly, nonatomic) STBatteryStatusDomainPublisher *batteryDataPublisher;
@property (readonly, nonatomic) BCBatteryDeviceController *batteryDeviceController;
@property (nonatomic) BOOL shouldExposeNotChargingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectedDevicesDidChange:(id)a0;
- (void)_updateData;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;
- (void)_noteNotChargingStatusChanged;
- (void)invalidate;
- (void)_updateShouldExposeNotChargingState;
- (BOOL)_isInNotChargingState;
- (void).cxx_destruct;

@end
