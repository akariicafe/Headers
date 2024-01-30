@interface CDPCABackupRecoveryReporter : CDPCAReporter

- (id)init;
- (void)backupRecoveryDidSucceed;
- (void)backupRecoveryDidSucceedWithoutLocalSecret;
- (void)backupRecoveryDidCancel;
- (void)backupRecoveryDidReset;
- (void)backupRecoveryDidFailWithError:(id)a0;

@end
