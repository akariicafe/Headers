@class NSDate, NSString, HDClinicalIngestionTaskContext, HDClinicalIngestionAnalyticsAccumulator, HDHealthRecordsProfileExtension, HKHealthRecordsIngestionOutcome, NSDictionary, NSSet, HDProfile, HDHealthRecordsXPCServiceClient, NSError, HDDaemonTransaction;

@interface HDClinicalIngestionTask : NSOperation {
    HDHealthRecordsProfileExtension *_profileExtension;
    HDProfile *_profile;
    NSSet *_accountIdentifiers;
    NSDictionary *_perAccountInfo;
    NSError *_ingestionError;
    HDDaemonTransaction *_transaction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (readonly, nonatomic) NSDictionary *updateGatewayOperationsByAccountIdentifier;
@property (nonatomic) BOOL hasNewRecords;
@property (copy, nonatomic) NSString *analyticsString;
@property (readonly, copy, nonatomic) NSDate *taskBeganDate;
@property (readonly, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDHealthRecordsXPCServiceClient *healthRecordsServiceClient;
@property (readonly, nonatomic) HDClinicalIngestionAnalyticsAccumulator *currentAnalyticsAccumulator;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, copy, nonatomic) HDClinicalIngestionTaskContext *context;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ willBeginFetchingAndExtracting;
@property (copy, nonatomic) id /* block */ didFinishFetchingAndExtracting;
@property (readonly, copy, nonatomic) HKHealthRecordsIngestionOutcome *outcome;

+ (BOOL)_isValidNextPageQueryURL:(id)a0 withBaseURL:(id)a1;
+ (BOOL)_accumulatedErrorAllowsToProceedRunningStaleResourcesOperation:(id)a0;

- (void)_cancelWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)description;
- (void)accumulateIngestionAnalyticsMetric:(id)a0 gatewayCountryCode:(id)a1;
- (void)_didStart;
- (id)initWithContext:(id)a0 extension:(id)a1 accountIdentifiers:(id)a2 completion:(id /* block */)a3;
- (BOOL)_ingestionAllowed;
- (BOOL)_prepareAccounts:(id *)a0 userFetchEligibleAccounts:(id *)a1 withError:(id *)a2;
- (void)_prepareUpdateGatewaysOperationsForAccounts:(id)a0;
- (void)_notifyIfWorkMayBeDoneForAccounts:(id)a0;
- (void)_performFileImportWithAccount:(id)a0;
- (void)_performFetchWithAccount:(id)a0 batchingSemaphore:(id)a1;
- (void)_performExtractionWithAccount:(id)a0;
- (void)_collectCurrentIngestionAnalytics;
- (BOOL)_checkIfNewRecordsExistWithError:(id *)a0;
- (void)_markHadError:(id)a0;
- (void)_didFinishWithStartTimeInternal:(double)a0;
- (void)_accountWithIdentifier:(id)a0 addOutcomeInfo:(unsigned long long)a1;
- (BOOL)_verifyGatewaysForAccount:(id)a0 error:(id *)a1;
- (id)_fetchableAccountForAccount:(id)a0 error:(id *)a1;
- (BOOL)_performResourceFetchWithAccount:(id)a0 batchingSemaphore:(id)a1 error:(id *)a2;
- (id)_resourceFetchOperationWithSession:(id)a0 schema:(id)a1 account:(id)a2 queryMode:(long long)a3 resourceURL:(id)a4;
- (id)_dataFromResourceFetchOperation:(id)a0 account:(id)a1 FHIRVersion:(id)a2;
- (unsigned long long)_saveResourcesObjects:(id)a0 forAccount:(id)a1;
- (BOOL)_handleStaleResourcesOfAccount:(id)a0 ingestStartDate:(id)a1 error:(id *)a2;
- (id)_ivarLock_synthesizeTaskOutcomeWithSuccess:(BOOL)a0 runTime:(double)a1;
- (void)_markAccountsWithoutCredentialsAsReloginNeeded:(id)a0;
- (id)_gatewaysOperationForAccount:(id)a0;

@end
