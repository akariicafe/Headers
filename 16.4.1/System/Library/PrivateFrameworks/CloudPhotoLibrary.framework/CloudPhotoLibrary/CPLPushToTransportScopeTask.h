@class CPLEnginePushRepository, NSString, CPLTransportScopeMapping, NSDate, CPLEngineScope, NSObject, CPLEngineTransport, CPLUploadPushedChangesTask, CPLEngineScheduler, CPLEngineScopeStorage;
@protocol OS_dispatch_queue, CPLEngineTransportUpdateContributorsTask, CPLEngineTransportGroup;

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask <CPLUploadPushedChangesTaskDelegate> {
    NSObject<OS_dispatch_queue> *_lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentSubtaskLock;
    NSString *_scopeIdentifier;
    CPLEngineScopeStorage *_scopes;
    CPLEngineTransport *_transport;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScheduler *_scheduler;
    CPLEngineScope *_sharedScope;
    long long _ruleGroup;
    CPLTransportScopeMapping *_transportScopeMapping;
    id<CPLEngineTransportUpdateContributorsTask> _updateContributorsTask;
    id<CPLEngineTransportGroup> _storedTransportGroup;
    id<CPLEngineTransportGroup> _transportGroup;
    long long _taskItem;
    NSString *_currentTaskKey;
    NSDate *_taskStartDate;
    unsigned long long _recordCount;
    BOOL _didExtractOneBatch;
    BOOL _wasBusy;
    BOOL _hasUploadedOneBatch;
    BOOL _retryImmediately;
    BOOL _contributorsUpdateIsDisabled;
}

@property (readonly) CPLUploadPushedChangesTask *currentSubtask;
@property (nonatomic) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;
- (void)_launch;
- (id)taskIdentifier;
- (void)cancel:(BOOL)a0;
- (void)cancel;
- (void)launch;
- (void).cxx_destruct;
- (void)_launchSubTask:(id)a0;
- (void)_uploadTask:(id)a0 didFinishWithError:(id)a1;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void)_acknowledgeContributorUpdatesAndContinue:(id)a0;
- (id)_contributorsUpdatesInTransaction:(id)a0;
- (void)_didFinishTaskWithKey:(id)a0 error:(BOOL)a1 cancelled:(BOOL)a2;
- (void)_didStartTaskWithKey:(id)a0 recordCount:(unsigned long long)a1;
- (void)_discardCurrentSubtask;
- (void)_excludeScopeFromMingling;
- (void)_includeScopeInMingling;
- (void)_noteSuccessfulUpdateInTransaction:(id)a0;
- (void)_prepareTransportGroupForOneBatch;
- (void)_pushTaskDidFinishWithError:(id)a0;
- (BOOL)_shouldNotTrustCloudCacheAfterError:(id)a0;
- (BOOL)_shouldUploadBatchesWithDropReason:(id *)a0 shouldQuarantineRecords:(BOOL *)a1 inTransaction:(id)a2;
- (void)_updateContributors:(id)a0;
- (void)_updateQuotaStrategyAfterSuccessInTransaction:(id)a0;
- (void)_uploadChangesWithPriority:(unsigned long long)a0 maxBatchSize:(unsigned long long)a1;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (id)phaseDescription;
- (id)scopesForTask;
- (BOOL)task:(id)a0 checkScopeIsValidInTransaction:(id)a1;
- (void)task:(id)a0 noteSuccessfulUpdateInTransaction:(id)a1;
- (BOOL)task:(id)a0 shouldRetryImmediatelyInTransaction:(id)a1;
- (BOOL)task:(id)a0 shouldUploadBatchesWithDropReason:(id *)a1 shouldQuarantineRecords:(BOOL *)a2 inTransaction:(id)a3;

@end
