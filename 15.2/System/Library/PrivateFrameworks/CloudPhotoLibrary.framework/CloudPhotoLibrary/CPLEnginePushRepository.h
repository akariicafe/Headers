@class NSString, CPLPlatformObject, CPLBatchExtractionStrategy, NSMutableDictionary, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage> {
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    double _lastApproximativeUploadRate;
}

@property (readonly, nonatomic) BOOL shouldManageOutgoingResources;
@property (readonly, nonatomic) BOOL shouldManageExtractedBatch;
@property (retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly, nonatomic) unsigned long long maximumResourceSizePerBatch;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (id)allNonDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (BOOL)reinjectExtractedBatch:(id)a0 overwrittenRecordIdentifiers:(id *)a1 error:(id *)a2;
- (BOOL)hasChangesWithScopeFilter:(id)a0;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)a0;
- (id)status;
- (BOOL)hasChangesInScopeWithIdentifier:(id)a0;
- (void)updateApproximativeUploadRate:(double)a0;
- (id)_timingStatisticStatuses;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)allChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (BOOL)deleteAllChangesWithError:(id *)a0;
- (BOOL)storeChange:(id)a0 uploadIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)storedExtractedBatch;
- (BOOL)removeChange:(id)a0 error:(id *)a1;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 trashed:(BOOL)a2;
- (id)allChangesWithClass:(Class)a0 secondaryScopedIdentifier:(id)a1;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void)updateTimingStatisticForKey:(id)a0 duration:(double)a1 recordCount:(unsigned long long)a2 error:(BOOL)a3 cancelled:(BOOL)a4;
- (BOOL)storeExtractedBatch:(id)a0 error:(id *)a1;
- (BOOL)reinjectChange:(id)a0 dequeueOrder:(long long)a1 overwrittenRecord:(BOOL *)a2 error:(id *)a3;
- (id)allChangesWithScopeIdentifier:(id)a0;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 changeType:(unsigned long long)a2;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (void)notePushRepositoryStoredSomeChanges;
- (BOOL)discardChangeWithScopedIdentifier:(id)a0 error:(id *)a1;
- (id)_outgoingResources;
- (id)changeWithScopedIdentifier:(id)a0;

@end
