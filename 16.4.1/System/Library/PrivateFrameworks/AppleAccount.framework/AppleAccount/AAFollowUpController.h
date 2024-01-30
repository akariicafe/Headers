@interface AAFollowUpController : NSObject <AAFollowUpProtocol>

- (void)pendingFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_followUpItemForStartUsing:(id)a0;
- (id)_followupActionUserInfo:(id)a0;
- (double)ageOfOldestCustodianCFU;
- (id)_followUpItemForCustodianInvitationReminder:(id)a0;
- (BOOL)isRenewCredentialsCFUPosted;
- (id)_addRecoveryKeyAction;
- (id)_followUpItemForCustodianRemoved:(id)a0;
- (void)dismissFollowUpWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (id)_followUpItemForBeneficiaryIneligible:(id)a0;
- (BOOL)dismissFollowUpWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_shouldPostRenewFollowup:(id)a0;
- (id)followUpItemForIdentifier:(id)a0;
- (id)followUpItemForIdentifier:(id)a0 userInfo:(id)a1;
- (void)_dismissFollowUpWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_followUpItemForBeneficiaryRemoved:(id)a0;
- (void)dismissFollowUpsForAccount:(id)a0 identifiers:(id)a1 completion:(id /* block */)a2;
- (id)_followUpController;
- (id)_addRecoveryContactAction;
- (void)pendingFollowUpsForAccount:(id)a0 completion:(id /* block */)a1;
- (id)_walrusUserRecoveryFactorsMissingNotification;
- (void)postFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)dismissFollowUpWithIdentifier:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (id)creationDateOfOldestFollowUpWithIdentifiers:(id)a0;
- (id)_followUpItemForRenewCredentials:(id)a0;
- (BOOL)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (id)_followUpItemForCustodianWalrusRemoved:(id)a0;
- (id)_followUpItemForWalrusUserRecoveryFactorsMissing:(id)a0;
- (id)_followUpItemForVerifyTerms:(id)a0;
- (id)_recoveryNotificationWithInfo:(id)a0 type:(id)a1;
- (id)_followUpItemForCustodianWalrusNoLiveness:(id)a0;
- (id)_followUpItemForCustodianEmbargo:(id)a0;

@end
