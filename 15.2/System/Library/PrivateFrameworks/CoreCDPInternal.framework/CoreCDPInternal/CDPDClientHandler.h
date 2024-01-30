@class NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {
    NSXPCConnection *_connection;
    unsigned long long _entitlements;
    unsigned long long _clientType;
    id _notificationObject;
}

- (void)recoverSquirrelWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)_removeObserver;
- (void)clearFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_allowRecoveryKey;
- (void)_performRecoveryWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 errorProviuder:(id)a3 resultParser:(id)a4 secureBackUpController:(id)a5 completion:(id /* block */)a6;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (BOOL)_allowUtilityAccess;
- (id)initWithConnection:(id)a0 entitlements:(unsigned long long)a1 clientType:(unsigned long long)a2;
- (void)generateRandomRecoveryKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (void)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1 completion:(id /* block */)a2;
- (void)repairCloudDataProtectionStateWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)statusForDataPrivacyWithCompletion:(id /* block */)a0;
- (void)_reportCDPJoinMetricsWithContext:(id)a0 didJoin:(BOOL)a1 withError:(id)a2;
- (void)hasLocalSecretWithCompletion:(id /* block */)a0;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)attemptToEscrowPreRecord:(id)a0 preRecordUUID:(id)a1 secretType:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (BOOL)_allowStateMachineAccess;
- (void)deleteRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)shouldPerformRepairForContext:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (void)performRecoveryWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 completion:(id /* block */)a3;
- (BOOL)_allowFollowUps;
- (void).cxx_destruct;
- (void)recoverAndSynchronizeSquirrelWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (oneway void)isRecoveryKeyAvailableWithCompletion:(id /* block */)a0;
- (oneway void)updateDataPrivacyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)a0;
- (BOOL)_allowDataRecovery;
- (void)handleCloudDataProtectionStateWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)attemptToEscrowPreRecord:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)postFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)finishOfflineLocalSecretChangeWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)saveTermsAcceptance:(id)a0 completion:(id /* block */)a1;
- (void)localSecretChangedTo:(id)a0 secretType:(unsigned long long)a1 context:(id)a2 uiProvider:(id)a3 completion:(id /* block */)a4;
- (void)generateNewRecoveryKeyWithContext:(id)a0 uiProvider:(id)a1 completion:(id /* block */)a2;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(id /* block */)a0;
- (void)startCircleApplicationApprovalServerWithContext:(id)a0 completion:(id /* block */)a1;

@end
