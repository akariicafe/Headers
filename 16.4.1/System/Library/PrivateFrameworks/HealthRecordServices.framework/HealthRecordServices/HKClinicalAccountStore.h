@class HKObserverSet, NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKClinicalAccountStore : NSObject <HKClinicalAccountStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet *_accountStateChangeObservers;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (copy, nonatomic) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)a0 error:(id *)a1;
- (id)allAccountsWithError:(id *)a0;
- (void)_establishProxyConnection;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void)_executeCheapCallOnPluginServerProxy:(id)a0;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)a0;
- (void)fetchAllAccountsWithCompletion:(id /* block */)a0;
- (void)addAccountStateChangeListener:(id)a0;
- (void)beginInitialLoginSessionForGateway:(id)a0 completion:(id /* block */)a1;
- (void)beginReloginSessionForAccount:(id)a0 completion:(id /* block */)a1;
- (void)createStaticAccountWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 countryCode:(id)a3 fhirVersion:(id)a4 onlyIfNeededForSimulatedGatewayID:(id)a5 completion:(id /* block */)a6;
- (void)deleteAccountWithIdentifier:(id)a0 deletionReason:(long long)a1 completion:(id /* block */)a2;
- (void)deviceConfigurationSupportsHealthRecords:(id /* block */)a0;
- (void)fetchAccountForSource:(id)a0 completion:(id /* block */)a1;
- (void)fetchAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchAccountsForGatewaysWithExternalIDs:(id)a0 completion:(id /* block */)a1;
- (void)hasGatewayBackedHealthRecordsAccountWithCompletion:(id /* block */)a0;
- (void)persistEphemeralAccount:(id)a0 triggerIngestion:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeAccountStateChangeListener:(id)a0;
- (void)shouldShowHealthRecordsSectionWithCompletion:(id /* block */)a0;
- (void)updateClinicalSharingStatusForAccountWithIdentifier:(id)a0 firstSharedDate:(id)a1 lastSharedDate:(id)a2 userStatus:(id)a3 multiDeviceStatus:(id)a4 primaryDeviceName:(id)a5 completion:(id /* block */)a6;
- (id /* block */)_clientQueueBoolHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)_clientQueueDoubleBoolHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)_clientQueueFailableActionHandlerWithCompletion:(id /* block */)a0;
- (void)_fetchServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_getSynchronousServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)clientRemote_accountDidChange:(id)a0 changeType:(long long)a1;
- (void)endLoginSessionWithState:(id)a0 code:(id)a1 completion:(id /* block */)a2;
- (void)fetchAllEventsForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)hasAnyHealthRecordsAccountWithCompletion:(id /* block */)a0;
- (void)invalidateCredentialForAccountWithIdentifier:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)a0;
- (void)refreshAccountConnectionInformationForAccountsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)a0 usingCredentialWithPersistentID:(id)a1 completion:(id /* block */)a2;
- (void)simulateAccountDownloadOverdueWithIdentifier:(id)a0 stage:(long long)a1 completion:(id /* block */)a2;
- (void)simulateUnmergeEventForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsClinicalSharing;
- (void)updateAccountCredentialStateForAccountWithIdentifier:(id)a0 state:(long long)a1 event:(id)a2 completion:(id /* block */)a3;

@end
