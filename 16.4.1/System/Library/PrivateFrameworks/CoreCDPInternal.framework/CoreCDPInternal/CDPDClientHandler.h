@class CDPWalrusDaemonService, NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {
    NSXPCConnection *_connection;
    unsigned long long _entitlements;
    unsigned long long _clientType;
    id _notificationObject;
    CDPWalrusDaemonService *_walrusDaemonService;
}

- (void)verifyRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (BOOL)_allowRecoveryKey;
- (oneway void)broadcastWalrusStateChange;
- (void)finishOfflineLocalSecretChangeWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)updateDataPrivacyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performRecoveryWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 completion:(id /* block */)a3;
- (oneway void)repairWalrusWithCompletion:(id /* block */)a0;
- (void)generateRandomRecoveryKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)generateNewRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)performSilentEscrowRecordRepairWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_removeObserver;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 entitlements:(unsigned long long)a1 clientType:(unsigned long long)a2;
- (void)repairCloudDataProtectionStateWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)isRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (void)hasLocalSecretWithCompletion:(id /* block */)a0;
- (void)attemptToEscrowPreRecord:(id)a0 preRecordUUID:(id)a1 secretType:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)postFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (oneway void)isOTEnabledForContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_allowUtilityAccess;
- (BOOL)_allowDataRecovery;
- (oneway void)shouldPerformSilentEscrowRecordRepairWithContext:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)startSilentEscrowRecordRepairWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (oneway void)updateLastSilentEscrowRecordRepairAttemptDate:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)a0 completion:(id /* block */)a1;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 context:(id)a2 uiProvider:(id)a3 completion:(id /* block */)a4;
- (oneway void)statusForDataPrivacyWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (BOOL)_allowStateMachineAccess;
- (void)recoverSquirrelWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)startCircleApplicationApprovalServerWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_performRecoveryWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 errorProviuder:(id)a3 resultParser:(id)a4 secureBackUpController:(id)a5 completion:(id /* block */)a6;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(id /* block */)a0;
- (oneway void)fetchEscrowRecordDevicesWithContext:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)clearFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_reportCDPJoinMetricsWithContext:(id)a0 didJoin:(BOOL)a1 withError:(id)a2;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)a0 context:(id)a1;
- (void)handleCloudDataProtectionStateWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)attemptToEscrowPreRecord:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (BOOL)_allowFollowUps;
- (oneway void)deviceEscrowRecordRecoverableWithContext:(id)a0 completion:(id /* block */)a1;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)shouldPerformRepairForContext:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)saveTermsAcceptance:(id)a0 completion:(id /* block */)a1;
- (void)recoverAndSynchronizeSquirrelWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)deleteRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)generateEscrowRecordStatusReportForContext:(id)a0 usingCache:(BOOL)a1 withCompletion:(id /* block */)a2;

@end
