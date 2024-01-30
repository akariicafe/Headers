@class NSString;

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_entryLimitSignInBodyForDevice:(id)a0;
- (id)_accountResetRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_cancelRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_entryLimitNoResetForRepairForDevice:(id)a0;
- (id)_entryLimitRecoveryKeyAvailableBodyForDevice:(id)a0;
- (id)_entryLimitResetAvailableBodyForDevice:(id)a0;
- (id)_entryLimitTitleForDevice:(id)a0;
- (unsigned long long)_escapeOfferForDevices:(id)a0 remoteApproval:(BOOL)a1 forMultipleICSC:(BOOL)a2;
- (id)_fallbackRecoveryOptionWithCompletion:(id /* block */)a0;
- (void)_handleHardLimitErrorForCurrentContextWithDevice:(id)a0 completion:(id /* block */)a1;
- (void)_handleLimit:(unsigned long long)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)a0 completion:(id /* block */)a1;
- (id)_hardLimitErrorBodyWithDevice:(id)a0;
- (id)_hardLimitUserInfoForDevice:(id)a0;
- (id)_infoDictionaryWithTitle:(id)a0 andBody:(id)a1;
- (void)_populateUserInfo:(id)a0 recoveryIndexHandlers:(id)a1 withRecoveryOption:(id)a2;
- (id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)a0;
- (id)_resetProtectedDataErrorUnrecoverable;
- (void)_showAccountResetConfirmationWithCompletion:(id /* block */)a0;
- (void)_showAccountResetConfirmationWithoutRecovery:(id /* block */)a0;
- (void)_showEntryLimitError:(id)a0 withRecoveryOptionHandlers:(id)a1 defaultIndex:(long long)a2 completion:(id /* block */)a3;
- (id)_skipSignInRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_softLimitErrorBodyForDevice:(id)a0;
- (id)_userInfoForLimit:(unsigned long long)a0 withDevice:(id)a1;
- (void)beginInteractiveRecoveryForDevices:(id)a0 isUsingMultipleICSC:(BOOL)a1 usingValidator:(id)a2;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)a0;
- (id)recoveryValidatorWithDevices:(id)a0 forMultipleICSC:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)remoteSecretValidator:(id)a0 applyToJoinCircleWithJoinHandler:(id /* block */)a1;
- (void)remoteSecretValidator:(id)a0 attemptCustodianRecoveryWithInfo:(id)a1 completion:(id /* block */)a2;
- (void)secretValidator:(id)a0 didFailRecovery:(id)a1 withError:(id)a2 completion:(id /* block */)a3;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)secretValidator:(id)a0 shouldAcceptRecoveryError:(id *)a1;
- (void)secretValidatorWillAttemptRecovery;

@end
