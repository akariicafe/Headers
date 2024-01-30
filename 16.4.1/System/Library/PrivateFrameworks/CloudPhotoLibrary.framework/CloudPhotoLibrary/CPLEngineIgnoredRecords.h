@class NSString, CPLPlatformObject;

@interface CPLEngineIgnoredRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (unsigned long long)scopeType;
- (BOOL)removeRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (id)ignoredRecordsBeforeDate:(id)a0 scopeIdentifier:(id)a1 maximumCount:(unsigned long long)a2;
- (BOOL)setIgnoredDate:(id)a0 forRecordWithScopedIdentifier:(id)a1 error:(id *)a2;
- (id)recordWithScopedIdentifier:(id)a0;
- (BOOL)addIgnoredRecord:(id)a0 ignoredDate:(id)a1 otherScopeIndex:(long long)a2 error:(id *)a3;
- (id)ignoredRecordWithScopedIdentifier:(id)a0;
- (BOOL)scopeIdentifier:(id)a0 hasIgnoredRecordsBeforeDate:(id)a1;

@end
