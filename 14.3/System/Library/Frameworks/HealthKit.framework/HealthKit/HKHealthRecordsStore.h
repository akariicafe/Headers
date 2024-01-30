@class HKObserverSet, NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _lastKnownIngestionState;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (retain, nonatomic) HKObserverSet *ingestionStateChangeObservers;
@property (retain, nonatomic) HKObserverSet *accountStateChangeObservers;
@property (retain, nonatomic) HKObserverSet *chrSupportedStateChangeObservers;
@property (copy, nonatomic) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) long long currentIngestionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void)createStaticAccountWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 countryCode:(id)a3 fhirVersion:(id)a4 onlyIfNeededForSimulatedGatewayID:(id)a5 completion:(id /* block */)a6;
- (void)triggerClinicalContentAnalyticsForReason:(long long)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchRemoteProviderWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)a0;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)a0;
- (void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id /* block */)_actionCompletionWithObjectOnClientQueue:(id /* block */)a0;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)a0 accountIdentifier:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)fetchAllAccountsWithCompletion:(id /* block */)a0;
- (void)_establishProxyConnection;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void).cxx_destruct;
- (void)_executeCheapCallOnPluginServerProxy:(id)a0;
- (void)addAccountStateChangeListener:(id)a0;
- (void)addIngestionStateListener:(id)a0;
- (BOOL)hasHealthRecordsAccount;
- (void)clientRemote_updateIngestionState:(long long)a0;
- (void)clientRemote_accountDidChange:(id)a0 changeType:(long long)a1;
- (void)fetchAccountForSource:(id)a0 completion:(id /* block */)a1;
- (void)clientRemote_healthRecordsSupportedDidChangeTo:(BOOL)a0;
- (void)fetchAccountsForGateways:(id)a0 completion:(id /* block */)a1;
- (void)fetchAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeAccountStateChangeListener:(id)a0;
- (void)invalidateCredentialForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)beginInitialLoginSessionForGateway:(id)a0 completion:(id /* block */)a1;
- (void)beginReloginSessionForAccount:(id)a0 completion:(id /* block */)a1;
- (void)updateAccountCredentialStateForAccountWithIdentifier:(id)a0 state:(long long)a1 completion:(id /* block */)a2;
- (void)ingestHealthRecordsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)resetHealthRecordsLastExtractedRowIDWithCompletion:(id /* block */)a0;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)a0 accountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)triggerHealthCloudUploadWithCompletion:(id /* block */)a0;
- (void)getHealthRecordsIngestionFrequencyWithCompletion:(id /* block */)a0;
- (void)setHealthRecordsIngestionFrequency:(long long)a0 completion:(id /* block */)a1;
- (void)fetchRawSourceStringForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchExportedPropertiesForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)stringifyExtractionFailureReasonsForRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchLogoDataForBrand:(id)a0 scaleKey:(id)a1 completion:(id /* block */)a2;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)a0;
- (void)addHealthRecordsSupportedChangeListener:(id)a0;
- (void)removeHealthRecordsSupportedChangeListener:(id)a0;
- (void)badgeForNewHealthRecordsWithCompletion:(id /* block */)a0;
- (void)notifyForNewHealthRecordsWithCompletion:(id /* block */)a0;
- (void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)a0;
- (void)_hk_shouldPromptForOptInClinicalDataCollection:(id /* block */)a0;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)a0 completion:(id /* block */)a1;
- (id)accountWithIdentifier:(id)a0 error:(id *)a1;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)a0;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (void)fetchRemoteSearchResultsPageForQuery:(id)a0 latitude:(id)a1 longitude:(id)a2 from:(long long)a3 completion:(id /* block */)a4;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)a0;
- (void)fetchRemoteGatewayWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)endLoginSessionWithState:(id)a0 code:(id)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0;
- (id)allAccountsWithError:(id *)a0;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)a0 usingCredentialWithPersistentID:(id)a1 completion:(id /* block */)a2;

@end
