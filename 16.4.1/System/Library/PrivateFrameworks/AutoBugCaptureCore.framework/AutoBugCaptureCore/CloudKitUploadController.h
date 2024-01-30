@class AnalyticsWorkspace, DiagnosticCaseSummaryAnalytics, UploadRecordAnalytics, DiagnosticCaseStorageAnalytics, NSObject;
@protocol OS_dispatch_queue;

@interface CloudKitUploadController : NSObject {
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseStorageAnalytics *_caseStorageAnalytics;
    DiagnosticCaseSummaryAnalytics *_caseSummaryAnalytics;
    UploadRecordAnalytics *_uploadRecordAnalytics;
    unsigned long long _outstandingOperationCount;
    BOOL _aggregateOperationResult;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)unregisterCloudKitUploadActivities;

- (void)_save;
- (void)uploadDiagnosticCases:(id)a0 activity:(id)a1;
- (id)fetchCaseSummariesWithIdentifiers:(id)a0;
- (void)uploadToCloudKitContainer:(id)a0 withRecords:(id)a1 activity:(id)a2;
- (id)initWithWorkspace:(id)a0;
- (void)performUploadDecisionForCaseIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)ckcodeDecisionService:(id)a0 response:(id /* block */)a1;
- (void)uploadCasesWithIdentifiers:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)performSubmissionOfRecentCaseSummaries:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)performSubmissionOfCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)fetchRecentPendingCaseSummaries:(unsigned long long)a0;
- (void)submitRecentCaseSummaries:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)randomlySelectCasesFrom:(id)a0 maximum:(unsigned long long)a1;
- (id)_fetchRecentPendingCaseSummariesInternal:(id)a0 limit:(unsigned long long)a1;
- (void)save;
- (void)finishXPCActivity:(id)a0;
- (id)processCloudkitDecisionServiceResponse:(id)a0;
- (id)locallyFilterCases:(id)a0;
- (id)_fetchCasesInternal:(id)a0 limit:(unsigned long long)a1;
- (BOOL)logUploadRequiresConsent:(id)a0;
- (void)startPeriodicSummaryTask:(id)a0;
- (void)operationCompletedWithID:(id)a0 savedRecords:(id)a1 deletedRecords:(id)a2 error:(id)a3 activity:(id)a4;
- (BOOL)validateCaseAttachmentsForDiagnosticCaseStorage:(id)a0 record:(id)a1;
- (void)filterCasesViaCloudkitDecisionService:(id)a0 activity:(id)a1 response:(id /* block */)a2;
- (void)uploadDecisionWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)configureCaseSummaryDiscretionaryActivityCriteria:(id)a0;
- (void)configureLogUploadDiscretionaryActivityCriteria:(id)a0;
- (void)submitCaseSummaries:(id)a0 activity:(id)a1;
- (void)configureWorkspace:(id)a0;
- (void)uploadMostRecentCases:(unsigned long long)a0;
- (id)fetchRecentCasesPendingUpload:(unsigned long long)a0;
- (void)registerCaseSummaryActivities;
- (void)performUploadForRecentCases:(unsigned long long)a0;
- (void)registerLogUploadActivities;
- (id)fetchCasesWithIdentifiers:(id)a0 limit:(unsigned long long)a1;
- (void)recordOperationCompleteForOperationID:(id)a0 completionTime:(id)a1 success:(BOOL)a2;
- (void)submitCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)filterCasesPendingUpload:(id)a0 activity:(id)a1 reply:(id /* block */)a2;
- (void)performUploadForCaseIdentifiers:(id)a0;
- (void)startPeriodicUploadTask:(id)a0;
- (id)uploadOperationWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1 allowCellular:(BOOL)a2 activity:(id)a3;
- (BOOL)shouldDeferFromCloudKitError:(id)a0;
- (void).cxx_destruct;
- (id)currentCloudKitContainerForEnvironment:(long long)a0;
- (void)registerCloudKitUploadActivities;

@end
