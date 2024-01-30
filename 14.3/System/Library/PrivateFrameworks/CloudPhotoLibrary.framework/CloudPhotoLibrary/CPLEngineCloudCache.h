@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (id)resourceOfType:(unsigned long long)a0 forRecordWithScopedIdentifier:(id)a1 error:(id *)a2;
- (BOOL)addRecord:(id)a0 isFinal:(BOOL)a1 error:(id *)a2;
- (BOOL)updateFinalRecord:(id)a0 confirmed:(BOOL)a1 error:(id *)a2;
- (BOOL)updateStagedRecord:(id)a0 error:(id *)a1;
- (BOOL)applyBatch:(id)a0 isFinal:(BOOL)a1 direction:(unsigned long long)a2 withError:(id *)a3;
- (BOOL)_remapRecord:(id)a0 inBatch:(id)a1 error:(id *)a2;
- (id)cloudChangeBatchFromBatch:(id)a0 usingMapping:(id)a1 isFinal:(BOOL)a2 withError:(id *)a3;
- (BOOL)confirmAllRecordsWithError:(id *)a0;
- (BOOL)deleteRecordWithScopedIdentifier:(id)a0 isFinal:(BOOL)a1 error:(id *)a2;
- (id)recordWithScopedIdentifier:(id)a0 isFinal:(BOOL)a1;
- (id)recordWithScopedIdentifier:(id)a0 isConfirmed:(BOOL *)a1 isStaged:(BOOL *)a2;
- (id)recordsWithRelatedScopedIdentifier:(id)a0 isFinal:(BOOL)a1;
- (id)recordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1 isFinal:(BOOL)a2;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0 isFinal:(BOOL)a1;
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)a0;
- (BOOL)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)a0;
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (BOOL)ackownledgeRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)remapAllRecordsWithPreviousScopedIdentifier:(id)a0 newScopedIdentifier:(id)a1 error:(id *)a2;
- (BOOL)commitStagedChangesForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)discardStagedChangesForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)discardStagedChangesWithScopeFilter:(id)a0 error:(id *)a1;
- (void)getCommittedRecord:(id *)a0 stagedRecord:(id *)a1 forScopedIdentifier:(id)a2;
- (id)recordsOfClass:(Class)a0 isFinal:(BOOL)a1;
- (id)allRecordsIsFinal:(BOOL)a0;

@end
