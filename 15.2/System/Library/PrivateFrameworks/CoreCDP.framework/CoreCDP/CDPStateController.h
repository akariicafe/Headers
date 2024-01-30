@interface CDPStateController : CDPController

- (BOOL)isManateeAvailable:(id *)a0;
- (BOOL)shouldPerformRepairWithOptionForceFetch:(BOOL)a0 error:(id *)a1;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startCircleApplicationApprovalServer:(id /* block */)a0;
- (void)attemptToEscrowPreRecord:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteRecoveryKeyWithError:(id *)a0;
- (id)generateRandomRecoveryKey:(id *)a0;
- (void)isRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id /* block */)a0;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)a0;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (void)startCircleApplicationApprovalServerSkipEscrowFetches:(id /* block */)a0;
- (BOOL)isRecoveryKeyAvailableWithError:(id *)a0;
- (void)handleURLActionWithInfo:(id)a0;
- (void)recoverAndSynchronizeWithSquirrel:(id /* block */)a0;
- (void)recoverWithSquirrel:(id /* block */)a0;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)attemptToEscrowPreRecord:(id)a0 preRecordUUID:(id)a1 secretType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)deleteRecoveryKey:(id /* block */)a0;
- (void)handleURLActionWithInfo:(id)a0 completion:(id /* block */)a1;

@end
