@class NSString, NSMutableArray, CPLPlatformObject;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long _popState;
    NSMutableArray *_remainingClassesToBePopped;
}

@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderedClassesForDelete;
+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForChanges;

- (unsigned long long)scopeType;
- (BOOL)hasUnmingledRecordsForScopeWithIdentifier:(id)a0;
- (BOOL)openWithError:(id *)a0;
- (BOOL)hasMingledRecordsForScopeWithIdentifier:(id)a0;
- (unsigned long long)countOfUnmingledRecords;
- (BOOL)_appendBatchToStorage:(id)a0 alreadyMingled:(BOOL)a1 error:(id *)a2;
- (BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)popChangeBatch:(id *)a0 error:(id *)a1;
- (BOOL)resetMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)_popChangeBatchOfChangedRecords:(id *)a0 maximumCount:(unsigned long long)a1 stop:(BOOL *)a2 error:(id *)a3;
- (BOOL)hasUnmingledRecordsWithScopeFilter:(id)a0;
- (BOOL)shouldKeepDeleteChange:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (BOOL)_popChangeBatchOfDeletedRecords:(id *)a0 maximumCount:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)countOfAssetChanges;
- (BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)resetMingledRecordsWithScopeFilter:(id)a0 error:(id *)a1;
- (BOOL)appendBatch:(id)a0 alreadyMingled:(BOOL)a1 error:(id *)a2;
- (BOOL)prepareForMinglingWithScopeFilter:(id)a0 error:(id *)a1;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (id)cachedRecordWithScopedIdentifier:(id)a0;
- (id)changeWithScopedIdentifier:(id)a0;

@end
