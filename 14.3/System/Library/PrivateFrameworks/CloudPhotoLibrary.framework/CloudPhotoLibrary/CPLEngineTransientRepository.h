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

+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForDelete;
+ (id)orderedClassesForChanges;

- (BOOL)openWithError:(id *)a0;
- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (id)changeWithScopedIdentifier:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)popChangeBatch:(id *)a0 error:(id *)a1;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (unsigned long long)countOfAssetChanges;
- (BOOL)_appendBatchToStorage:(id)a0 alreadyMingled:(BOOL)a1 error:(id *)a2;
- (BOOL)appendBatch:(id)a0 alreadyMingled:(BOOL)a1 error:(id *)a2;
- (BOOL)prepareForMinglingWithScopeFilter:(id)a0 error:(id *)a1;
- (BOOL)_popChangeBatchOfDeletedRecords:(id *)a0 maximumCount:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_popChangeBatchOfChangedRecords:(id *)a0 maximumCount:(unsigned long long)a1 stop:(BOOL *)a2 error:(id *)a3;
- (BOOL)hasMingledRecordsForScopeWithIdentifier:(id)a0;
- (BOOL)hasUnmingledRecordsForScopeWithIdentifier:(id)a0;
- (BOOL)resetMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)resetMingledRecordsWithScopeFilter:(id)a0 error:(id *)a1;
- (BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)countOfUnmingledRecords;
- (BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)hasUnmingledRecordsWithScopeFilter:(id)a0;

@end
