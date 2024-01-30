@interface BYSourceDeviceMigration : BYDeviceMigrationManager

+ (id)createDeviceTransferTask:(id)a0;

- (void)startDeviceTransferTask;
- (void)cancelDeviceTransferTask;
- (BOOL)requiresProcessAssertion;
- (id)sourceDeviceTransferTask;
- (void)updateFileTransferSession:(id)a0;

@end
