@class HKObserverSet, NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _lastKnownIngestionState;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (retain, nonatomic) HKObserverSet *ingestionStateChangeObservers;
@property (retain, nonatomic) HKObserverSet *chrSupportedStateChangeObservers;
@property (copy, nonatomic) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) long long currentIngestionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)_establishProxyConnection;
- (id)remoteInterface;
- (BOOL)hasHealthRecordsAccount;
- (void)_establishProxyConnectionIfNoObserversArePresent;
- (void).cxx_destruct;
- (void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)a0 accountIdentifier:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (id /* block */)_actionCompletionWithObjectOnClientQueue:(id /* block */)a0;
- (void)_hk_shouldPromptForOptInClinicalDataCollection:(id /* block */)a0;
- (void)removeIngestionStateListener:(id)a0;
- (void)addIngestionStateListener:(id)a0;
- (void)clientRemote_healthRecordsSupportedDidChangeTo:(BOOL)a0;
- (void)clientRemote_updateIngestionState:(long long)a0;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)a0;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)a0 accountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)ingestHealthRecordsWithOptions:(unsigned long long)a0 reason:(id)a1 accountIdentifiers:(id)a2 completion:(id /* block */)a3;
- (void)resetHealthRecordsLastExtractedRowIDWithCompletion:(id /* block */)a0;
- (void)getHealthRecordsIngestionFrequencyWithCompletion:(id /* block */)a0;
- (void)setHealthRecordsIngestionFrequency:(long long)a0 completion:(id /* block */)a1;
- (void)fetchRawSourceStringForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchExportedPropertiesForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)stringifyExtractionFailureReasonsForRecord:(id)a0 completion:(id /* block */)a1;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)a0 completion:(id /* block */)a1;
- (void)fetchLogoDataForBrand:(id)a0 scaleKey:(id)a1 completion:(id /* block */)a2;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)a0;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)a0;
- (void)triggerHealthCloudUploadWithCompletion:(id /* block */)a0;
- (void)triggerClinicalContentAnalyticsForReason:(long long)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)a0;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (void)fetchRemoteSearchResultsPageForQuery:(id)a0 completion:(id /* block */)a1;
- (void)fetchRemoteProviderWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)fetchRemoteGatewayWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)a0 completion:(id /* block */)a1;
- (void)addHealthRecordsSupportedChangeListener:(id)a0;
- (void)removeHealthRecordsSupportedChangeListener:(id)a0;
- (void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)_executeCheapCallOnPluginServerProxy:(id)a0;

@end
