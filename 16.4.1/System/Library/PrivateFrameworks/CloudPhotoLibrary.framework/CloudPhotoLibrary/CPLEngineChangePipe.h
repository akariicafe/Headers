@class NSString, CPLPlatformObject;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) unsigned long long countOfQueuedBatches;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmpty;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)deleteAllChangeBatchesWithError:(id *)a0;
- (BOOL)appendChangeBatch:(id)a0 error:(id *)a1;
- (BOOL)hasQueuedBatches;
- (unsigned long long)scopeType;
- (BOOL)popChangeBatch:(id *)a0 error:(id *)a1;
- (BOOL)hasSomeChangeWithScopeFilter:(id)a0;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (BOOL)popNextBatchWithError:(id *)a0;
- (id)allChangeBatches;
- (BOOL)hasSomeChangeInScopesWithIdentifiers:(id)a0;
- (id)nextBatch;
- (BOOL)compactChangeBatchesWithError:(id *)a0;
- (BOOL)deleteAllChangesWithScopeFilter:(id)a0 error:(id *)a1;

@end
