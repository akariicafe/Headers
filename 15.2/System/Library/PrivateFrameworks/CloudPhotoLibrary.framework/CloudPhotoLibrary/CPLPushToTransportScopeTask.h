@class NSMutableDictionary, NSDate, NSObject, CPLEngineScheduler, NSMutableArray, CPLEngineTransport, NSString, CPLDerivativesFilter, CPLBatchExtractionStrategy, CPLEngineStoreTransaction, CPLEnginePushRepository, NSArray, CPLBeforeUploadCheckItems, CPLChangeBatch, CPLEngineScopeStorage;
@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportGroup, CPLEngineTransportUploadBatchTask, OS_dispatch_queue;

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask <CPLBeforeUploadCheckItemsProvider> {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_scopeIdentifier;
    CPLEngineScopeStorage *_scopes;
    CPLEngineTransport *_transport;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScheduler *_scheduler;
    CPLBatchExtractionStrategy *_currentStrategy;
    CPLChangeBatch *_diffedBatch;
    CPLChangeBatch *_batchToCommit;
    CPLDerivativesFilter *_derivativesFilter;
    NSArray *_uploadResourceTasks;
    long long _ruleGroup;
    CPLBeforeUploadCheckItems *_checkItems;
    CPLEngineStoreTransaction *_transactionDuringItemsPreparation;
    NSMutableArray *_preparedUploadResourceTasks;
    NSMutableDictionary *_additionalTransportScopes;
    NSMutableDictionary *_invalidTransportScopes;
    id<CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
    id<CPLEngineTransportUploadBatchTask> _uploadTask;
    unsigned long long _lastReportedProgress;
    unsigned long long _countOfPushedChanges;
    double _startOfIteration;
    double _startOfDerivativesGeneration;
    BOOL _deferredCancel;
    BOOL _hasCachedShouldCheckResourcesAhead;
    BOOL _shouldCheckResourcesAhead;
    BOOL _shouldSetupEstimatedSize;
    id<CPLEngineTransportGroup> _transportGroup;
    long long _taskItem;
    BOOL _hasPushedSomeChanges;
    BOOL _isUsingOverQuotaStrategy;
    BOOL _resetStrategy;
    double _latestApproximativeUploadRate;
    NSString *_currentTaskKey;
    NSDate *_taskStartDate;
    unsigned long long _recordCount;
    BOOL _didExtractOneBatch;
}

@property (nonatomic) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)willNeedToAccessScopeWithIdentifier:(id)a0 error:(id *)a1;
- (void)_deleteGeneratedResourcesAfterError:(id)a0;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (void)_didStartTaskWithKey:(id)a0 recordCount:(unsigned long long)a1;
- (void)cancel:(BOOL)a0;
- (void)_generateNeededDerivatives;
- (void)_updateQuotaStrategyAfterSuccessInTransaction:(id)a0;
- (void)_prepareUploadBatch;
- (void)_doOneIteration;
- (BOOL)_discardUploadedExtractedBatch:(id)a0 error:(id *)a1;
- (id)taskIdentifier;
- (void)_popNextBatchAndContinue;
- (void)_didFinishTaskWithKey:(id)a0 error:(BOOL)a1 cancelled:(BOOL)a2;
- (void)_extractBatchWithTransaction:(id)a0 andStore:(id)a1;
- (void)_checkForRecordExistence;
- (void)_uploadBatch;
- (id)willUploadCloudResource:(id)a0 localResource:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)_reenqueueExtractedBatchWithRejectedRecords:(id)a0 error:(id *)a1;
- (void)_clearUploadBatch;
- (id)availableResourceTypesToUploadForChange:(id)a0;
- (void)launch;
- (BOOL)_markUploadedTasksDidFinishWithError:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void)_pushTaskDidFinishWithError:(id)a0;
- (void)_generateDerivativesForNextRecord:(id)a0 usingDerivativesCache:(id)a1;
- (void)cancel;
- (BOOL)isResourceDynamic:(id)a0;

@end
