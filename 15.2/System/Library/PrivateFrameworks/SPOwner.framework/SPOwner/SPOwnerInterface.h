@interface SPOwnerInterface : NSObject

- (id)trackingAvoidanceService;
- (id)persistentConnectionSession;
- (id)separationMonitoringSession;
- (id)firmwareUpdateSession;
- (id)tagSeparationSession;
- (id)privateFirmwareUpdateSession;
- (id)fmipRegisterInfo;
- (id)ownerSession;
- (id)maintenanceConnectionSession;
- (id)privateOwnerSession;
- (id)settingsConfiguration;

@end
