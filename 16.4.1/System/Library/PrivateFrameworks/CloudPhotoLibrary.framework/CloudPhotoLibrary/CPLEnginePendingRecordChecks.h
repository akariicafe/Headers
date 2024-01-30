@class NSString, CPLPlatformObject;

@interface CPLEnginePendingRecordChecks : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasRecordsToCheckWithScopeIdentifier:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (unsigned long long)scopeType;
- (id)nextBatchOfRecordsToCheckWithScopeIdentifier:(id)a0;
- (BOOL)enqueueCloudScopedIdentifiersToCheck:(id)a0 error:(id *)a1;
- (BOOL)dequeueCloudScopedIdentifiersToCheck:(id)a0 error:(id *)a1;

@end
