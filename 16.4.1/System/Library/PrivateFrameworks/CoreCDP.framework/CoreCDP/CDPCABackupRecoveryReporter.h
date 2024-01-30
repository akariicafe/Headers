@interface CDPCABackupRecoveryReporter : CDPCAReporter {
    unsigned long long _attemptedMethods;
    unsigned long long _availableMethods;
    unsigned long long _escrowDeviceCount;
    unsigned long long _joinMethod;
}

@property (readonly, nonatomic) unsigned long long joinMethod;

- (id)initWithContext:(id)a0;
- (void)backupRecoveryDidFailWithError:(id)a0;
- (void)backupRecoveryDidCancel;
- (void)backupRecoveryDidReset;
- (void)backupRecoveryDidSucceed;
- (void)backupRecoveryDidSucceedWithoutLocalSecret;
- (void)backupRecoverySetAttemptedMethod:(unsigned long long)a0;
- (void)backupRecoverySetAvailableMethod:(unsigned long long)a0;
- (void)backupRecoverySetJoinFromBundleID:(id)a0;
- (void)setEscrowDeviceCount:(long long)a0;

@end
