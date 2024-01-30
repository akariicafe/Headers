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
- (BOOL)_isInNotChargingState;
- (void)_registerForNotifications;
- (void)_updateData;
- (void)_updateShouldExposeNotChargingState;
- (void).cxx_destruct;
- (id)init;
- (void)_noteNotChargingStatusChanged;
- (void)invalidate;
- (void)dealloc;

@end
