@class NSString, HKTaskServerProxyProvider, HKObserverSet;

@interface HKClinicalAccountStore : NSObject <HKClinicalAccountStoreClientInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet *_accountStateChangeObservers;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (copy, nonatomic) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)addAccountStateChangeListener:(id)a0;
- (void)beginReloginSessionForAccount:(id)a0 completion:(id /* block */)a1;
- (void)connectionInvalidated;
- (void)_establishProxyConnection;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)a0;
- (void)createStaticAccountWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 countryCode:(id)a3 fhirVersion:(id)a4 onlyIfNeededForSimulatedGatewayID:(id)a5 completion:(id /* block */)a6;
- (void)beginInitialLoginSessionForGateway:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)refreshAccountConnectionInformationForAccountsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)accountWithIdentifier:(id)a0 error:(id *)a1;
- (void)invalidateCredentialForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)allAccountsWithError:(id *)a0;
- (BOOL)hasHealthRecordsAccount;
- (void)_getSynchronousServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)a0 usingCredentialWithPersistentID:(id)a1 completion:(id /* block */)a2;
- (void)deleteAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateAccountCredentialStateForAccountWithIdentifier:(id)a0 state:(long long)a1 completion:(id /* block */)a2;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void).cxx_destruct;
- (void)fetchAccountForSource:(id)a0 completion:(id /* block */)a1;
- (void)removeAccountStateChangeListener:(id)a0;
- (void)_fetchServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)fetchAllAccountsWithCompletion:(id /* block */)a0;
- (void)endLoginSessionWithState:(id)a0 code:(id)a1 completion:(id /* block */)a2;
- (void)fetchAccountsForGateways:(id)a0 completion:(id /* block */)a1;
- (void)updateClinicalSharingStatusForAccountWithIdentifier:(id)a0 firstSharedDate:(id)a1 lastSharedDate:(id)a2 userStatus:(id)a3 multiDeviceStatus:(id)a4 primaryDeviceName:(id)a5 completion:(id /* block */)a6;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)a0;
- (id)exportedInterface;
- (void)persistEphemeralAccount:(id)a0 triggerIngestion:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)clientRemote_accountDidChange:(id)a0 changeType:(long long)a1;
- (BOOL)supportsClinicalSharing;
- (void)_executeCheapCallOnPluginServerProxy:(id)a0;

@end
