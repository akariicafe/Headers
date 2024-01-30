@class CDPDCircleController, NSObject, CDPDSecureBackupController, CDPContext, NSXPCConnection, CDPDPCSController, CDPInheritanceTrustController;
@protocol CDPStateUIProviderInternal, OS_dispatch_queue;

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate> {
    CDPInheritanceTrustController *_inheritanceTrustController;
    NSObject<OS_dispatch_queue> *_beneficiaryTrustQueue;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (retain, nonatomic) CDPDCircleController *circleController;
@property (retain, nonatomic) CDPDPCSController *pcsController;
@property (retain, nonatomic) CDPContext *context;
@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (nonatomic) BOOL attemptedCDPEnable;

- (void)shouldPerformRepairWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (BOOL)shouldAllowCDPEnrollment;
- (void).cxx_destruct;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1;
- (id)_predicateForRecordUpgradeCheck;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)a0 localSecretType:(unsigned long long)a1 useCachedSecret:(BOOL)a2 circleJoinResult:(id)a3 completion:(id /* block */)a4;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)a0 type:(unsigned long long)a1 useCachedSecret:(BOOL)a2 circleJoinResult:(id)a3 completion:(id /* block */)a4;
- (void)_attemptBeneficiaryTrustWithInheritanceKey:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_attemptCDPEnable:(id /* block */)a0;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)_authenticatedShouldPerformRepairWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (id)_beneficiaryTrustQueue;
- (void)_confirmCDPEligibilityWithCompletion:(id /* block */)a0;
- (BOOL)_disableAsyncModeRequested;
- (void)_disableRecoveryKeyWithCompletion:(id /* block */)a0;
- (void)_enableCustodianRecoveryIfAvailableForContext:(id)a0;
- (void)_enableKVSForAccount:(id)a0 store:(id)a1 completion:(id /* block */)a2;
- (void)_enableSecureBackupWithCircleJoinResult:(id)a0 completion:(id /* block */)a1;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(id /* block */)a0;
- (void)_handleBeneficiaryTrustWithCompletion:(id /* block */)a0;
- (void)_handleCloudDataProtectionStateWithCompletion:(id /* block */)a0;
- (void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)a0 completion:(id /* block */)a1;
- (void)_handleJoinResult:(id)a0 completion:(id /* block */)a1;
- (void)_handlePreflightError:(id)a0 completion:(id /* block */)a1;
- (void)_handleiCDPStatusCheckError:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isICloudKeychainDisabledByManagementProfile;
- (void)_performInteractivelyAuthenticatedRepair:(id /* block */)a0;
- (void)_performSilentlyAuthenticatedRepair:(id /* block */)a0;
- (void)_postRecoveryEnableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_predicateForRecordUpgradeCheckIgnoringBottled;
- (id)_predicateForRepair;
- (void)_preflightAccountStateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_recoverSecureBackupWithCircleJoinResult:(id)a0 completion:(id /* block */)a1;
- (void)_refreshAndAuthenticateWithContext:(id)a0;
- (void)_reportEscrowRecoverabilityAnalytics;
- (void)_reportEscrowRecoveryAnalyticsWithRecoveryState:(BOOL)a0 resetState:(BOOL)a1 didError:(id)a2;
- (void)_resetAccountCDPStateWithCompletion:(id /* block */)a0;
- (void)circleController:(id)a0 secureBackupRecordsArePresentWithCompletion:(id /* block */)a1;
- (id)circlePeerIDForSecureBackupController:(id)a0;
- (id)contextForController:(id)a0;
- (id)initWithContext:(id)a0 connection:(id)a1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)a0;
- (void)promptForLocalSecretWithCompletion:(id /* block */)a0;
- (void)resetAccountCDPStateWithCompletion:(id /* block */)a0;
- (id)secureChannelContextForController:(id)a0;
- (BOOL)synchronizeCircleViewsForSecureBackupContext:(id)a0;

@end
