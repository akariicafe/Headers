@class NSString, HDHealthRecordsProfileExtension;

@interface HDHealthRecordsPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDHealthRecordsPluginServerInterface, HDClinicalIngestionStateChangeObserver, HDClinicalAccountStateObserver, HDHealthRecordsSupportedChangeObserver> {
    HDHealthRecordsProfileExtension *_profileExtension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void)connectionConfigured;
- (void)remote_fetchAllAccountsWithCompletion:(id /* block */)a0;
- (void)remote_fetchAccountForSource:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAccountsForGatewaysWithExternalIDs:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_deleteAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_invalidateCredentialForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_hasHealthRecordsAccountWithCompletion:(id /* block */)a0;
- (void)remote_beginReloginSessionForAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_beginInitialLoginSessionForGatewayWithExternalID:(id)a0 completion:(id /* block */)a1;
- (void)remote_endLoginSessionWithState:(id)a0 code:(id)a1 completion:(id /* block */)a2;
- (void)remote_pruneAuthenticationDataWithCompletion:(id /* block */)a0;
- (void)remote_replaceAccountWithNewAccountForAccountWithIdentifier:(id)a0 usingCredentialWithPersistentID:(id)a1 completion:(id /* block */)a2;
- (void)remote_updateAccountCredentialStateWithIdentifier:(id)a0 state:(long long)a1 completion:(id /* block */)a2;
- (void)remote_ingestionStateWithCompletion:(id /* block */)a0;
- (void)remote_ingestHealthRecordsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)remote_resetHealthRecordsLastExtractedRowIDWithCompletion:(id /* block */)a0;
- (void)remote_ingestHealthRecordsWithFHIRDocumentHandle:(id)a0 accountIdentifier:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)remote_getHealthRecordsIngestionFrequencyWithCompletion:(id /* block */)a0;
- (void)remote_setHealthRecordsIngestionFrequency:(long long)a0 completion:(id /* block */)a1;
- (void)remote_fetchRawSourceStringForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchExportedPropertiesForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchFHIRJSONDocumentWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchLogoDataForBrand:(id)a0 scaleKey:(id)a1 completion:(id /* block */)a2;
- (void)remote_stringifyExtractionFailureReasonsForRecord:(id)a0 completion:(id /* block */)a1;
- (void)remote_triggerClinicalOptInDataCollectionForReason:(long long)a0 completion:(id /* block */)a1;
- (void)remote_cancelInFlightSearchQueriesWithCompletion:(id /* block */)a0;
- (void)remote_resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remote_fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)a0;
- (void)remote_triggerHealthCloudUploadWithCompletion:(id /* block */)a0;
- (void)remote_triggerClinicalContentAnalyticsForReason:(long long)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)a0;
- (void)remote_fetchRemoteSearchResultsPageForQuery:(id)a0 latitude:(id)a1 longitude:(id)a2 from:(long long)a3 completion:(id /* block */)a4;
- (void)remote_fetchRemoteProviderWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)remote_fetchRemoteGatewayWithExternalID:(id)a0 batchID:(id)a1 completion:(id /* block */)a2;
- (void)remote_badgeForNewHealthRecordsWithCompletion:(id /* block */)a0;
- (void)remote_fetchLogoDataForFeaturedBrandsAtScaleKey:(id)a0 completion:(id /* block */)a1;
- (void)remote_notifyForNewHealthRecordsWithCompletion:(id /* block */)a0;
- (void)remote_registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)remote_deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)remote_createStaticAccountWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 countryCode:(id)a3 fhirVersion:(id)a4 onlyIfNeededForSimulatedGatewayID:(id)a5 completion:(id /* block */)a6;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)accountManager:(id)a0 account:(id)a1 didChangeState:(long long)a2;
- (id)_clientAccountsFromAccounts:(id)a0;
- (void)registerForAccountStateChanges;
- (void)registerForHealthRecordsSupportedStateChanges;
- (void)registerForIngestionStateChanges;
- (void)clinicalIngestionManager:(id)a0 willChangeIngestionState:(long long)a1;
- (void)profileExtension:(id)a0 healthRecordsSupported:(BOOL)a1;

@end
