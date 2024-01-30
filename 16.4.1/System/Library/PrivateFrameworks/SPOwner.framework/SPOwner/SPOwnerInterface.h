@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)separationMonitoringSession;
- (id)privateOwnerSession;
- (id)firmwareUpdateSession;
- (id)privateFirmwareUpdateSession;
- (id)tagSeparationSession;
- (id)persistentConnectionSession;
- (id)settingsConfiguration;
- (id)maintenanceConnectionSession;
- (id)fmipRegisterInfo;
- (id)trackingAvoidanceService;
- (id)ownerSession;

@end
