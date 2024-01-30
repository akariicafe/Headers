@class HKSynchronousObserverSet, HDHealthRecordsProfileExtension, HDProfile, HDClinicalIngestionAnalyticsAccumulator, NSObject;
@protocol OS_dispatch_queue;

@interface HDClinicalAccountManager : NSObject

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) HKSynchronousObserverSet *stateChangeObservers;
@property (readonly, nonatomic) HDClinicalIngestionAnalyticsAccumulator *currentAnalyticsAccumulator;

- (void)resetLastExtractedRowIDWithCompletion:(id /* block */)a0;
- (id)initWithProfileExtension:(id)a0;
- (void)_performIngestionForNewCredentialsOnAccountsWithIdentifiers:(id)a0;
- (id)init;
- (BOOL)updateCredentialStateForAccount:(id)a0 state:(long long)a1 error:(id *)a2;
- (void)_accountDidChange:(id)a0;
- (id)beginInitialLoginSessionForGatewayWithExternalID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_fetchAccessTokenForTokenSession:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)addAccountStateObserver:(id)a0;
- (id)_createAccountForGatewayWithExternalID:(id)a0 database:(id)a1 profile:(id)a2 error:(id *)a3;
- (BOOL)_deleteAccountWithSyncIdentifier:(id)a0 database:(id)a1 error:(out id *)a2;
- (BOOL)deleteAccountWithSyncIdentifier:(id)a0 error:(id *)a1;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)a0;
- (void)removeAccountStateObserver:(id)a0;
- (id)accountWithIdentifier:(id)a0 error:(out id *)a1;
- (id)credentialedSessionForAccount:(id)a0 error:(out id *)a1;
- (void)_observerQueue_messageObserversAboutAccount:(id)a0 changeType:(long long)a1;
- (id)_loginURLComponentsForState:(id)a0 gateway:(id)a1 error:(out id *)a2;
- (id)_newAccountIdentifierAfterReplacingAccountWithIdentifier:(id)a0 usingCredentialWithPersistentID:(id)a1 error:(id *)a2;
- (BOOL)_setAccountWithIdentifierNeedsRelogin:(id)a0 reason:(long long)a1 error:(id *)a2;
- (BOOL)hasAccountsWithError:(out id *)a0;
- (id)createStaticAccountWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 countryCode:(id)a3 fhirVersion:(id)a4 onlyIfNeededForSimulatedGatewayID:(id)a5 error:(id *)a6;
- (id)unitTesting_createAccountWithoutCredentialForGateway:(id)a0 authResponse:(id)a1 error:(id *)a2;
- (id)accountsForGatewaysWithExternalIDs:(id)a0 errorOut:(out id *)a1;
- (id)fetchableAccountsWithIdentifiers:(id)a0 error:(out id *)a1;
- (id)unitTesting_createAccountForGateway:(id)a0 requestedScope:(id)a1 authResponse:(id)a2 error:(id *)a3;
- (id)userFetchEligibleAccountsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)updateCredentialStateForAccountWithIdentifier:(id)a0 state:(long long)a1 error:(id *)a2;
- (void)didCompleteFetchForAccount:(id)a0 wasFullFetch:(BOOL)a1;
- (void)_observerQueue_accountDidChange:(id)a0 changeType:(long long)a1;
- (BOOL)deleteAccountWithIdentifier:(id)a0 error:(id *)a1;
- (id)_createCredentialVendorForAccount:(id)a0 error:(out id *)a1;
- (id)accountForSource:(id)a0 error:(out id *)a1;
- (id)sessionForAccount:(id)a0 error:(out id *)a1;
- (id)_savePatientMismatchedCredentialFromAuthResponse:(id)a0 requestedScope:(id)a1 error:(id *)a2;
- (id)unitTesting_createAccountForGateway:(id)a0 authResponse:(id)a1 error:(id *)a2;
- (void)endLoginSessionWithState:(id)a0 code:(id)a1 completion:(id /* block */)a2;
- (BOOL)invalidateCredentialForAccountWithIdentifier:(id)a0 error:(out id *)a1;
- (id)createStaticDSTU2AccountWithTitle:(id)a0 error:(id *)a1;
- (BOOL)_updateCredentialStateForAccountWithIdentifier:(id)a0 state:(long long)a1 reason:(long long)a2 error:(id *)a3;
- (id)allAccountsWithError:(out id *)a0;
- (id)accountsWithIdentifiers:(id)a0 error:(out id *)a1;
- (BOOL)_createOrUpdateCredentialFromAuthResponse:(id)a0 forAccount:(id)a1 requestedScope:(id)a2 error:(id *)a3;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)a0 usingCredentialWithPersistentID:(id)a1 completion:(id /* block */)a2;
- (id)beginReloginSessionForAccountWithIdentifier:(id)a0 error:(id *)a1;

@end
