@interface CDPCABackupRecoveryReporter : CDPCAReporter {
    unsigned long long _attemptedMethods;
}

- (id)initWithContext:(id)a0;
- (void)backupRecoverySetAttemptedMethod:(unsigned long long)a0;
- (void)backupRecoveryDidSucceed;
- (void)backupRecoveryDidFailWithError:(id)a0;
- (void)backupRecoveryDidSucceedWithoutLocalSecret;
- (void)backupRecoveryDidCancel;
- (void)backupRecoveryDidReset;
- (void)backupRecoverySetJoinFromBundleID:(id)a0;

@end
