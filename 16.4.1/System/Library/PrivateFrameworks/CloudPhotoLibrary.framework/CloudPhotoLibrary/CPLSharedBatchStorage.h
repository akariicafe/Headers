@class CPLEngineIgnoredRecords, NSString, CPLEngineCloudCache, CPLEngineScope, CPLEngineRemappedRecords, NSMutableDictionary, NSDate;
@protocol CPLSharedRecordMerger;

@interface CPLSharedBatchStorage : CPLEngineTransientRepositoryBatchStorage <CPLEngineIDMapping> {
    CPLEngineCloudCache *_cloudCache;
    CPLEngineRemappedRecords *_remappedRecords;
    CPLEngineIgnoredRecords *_ignoredRecords;
    NSMutableDictionary *_alreadyProcessedChanges;
    NSDate *_now;
}

@property (readonly, nonatomic) CPLEngineScope *sharedScope;
@property (readonly, nonatomic) id<CPLSharedRecordMerger> merger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (BOOL)addCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)setupCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)a0;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)a0;
- (BOOL)hasChangesInScopeWithIdentifier:(id)a0;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)allChangesWithScopeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_allChangesMatchingChangeType:(unsigned long long)a0 enumerator:(id)a1;
- (id)_correctPrivateScopedIdentifierForSharedScopedIdentifier:(id)a0 currentPrivateScopedIdentifier:(id)a1;
- (BOOL)_keepIgnoredRecord:(id)a0 shadowingRecord:(id)a1 inScope:(id)a2 error:(id *)a3;
- (id)_mergedRecordWithPrivateChange:(id)a0 sharedScopedIdentifier:(id *)a1;
- (id)_mergedRecordWithSharedChange:(id)a0 target:(id)a1;
- (id)_privateScopedIdentifierForSharedScopedIdentifier:(id)a0;
- (id)_remapSharedRecord:(id)a0 target:(id)a1;
- (id)_sharedRecordAsPrivateRecord:(id)a0 target:(id)a1;
- (id)_targetForPrivateScopedIdentifier:(id)a0;
- (id)_targetForSharedScopedIdentifier:(id)a0;
- (BOOL)_transferIgnoredRecordToTransientPullRepository:(id)a0 error:(id *)a1;
- (id)_unionEnumerationWithPrivateRecordEnumeratorGenerator:(id /* block */)a0 sharedRecordGenerator:(id /* block */)a1;
- (id)_updatePrivateScopedIdentifierForUnknownTarget:(id)a0;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 changeType:(unsigned long long)a2;
- (id)allChangesWithClass:(Class)a0 scopeIdentifier:(id)a1 trashed:(BOOL)a2;
- (id)allChangesWithClass:(Class)a0 secondaryScopedIdentifier:(id)a1;
- (id)allNonDeletedChangesWithClass:(Class)a0 scopeIdentifier:(id)a1;
- (void)beginExtractingBatch;
- (void)cleanupAfterExtractingBatch;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)a0;
- (id)initWithTransientRepository:(id)a0 scope:(id)a1 sharedScope:(id)a2 merger:(id)a3;
- (BOOL)isRecordWithScopedIdentifierStashed:(id)a0;
- (BOOL)removeChange:(id)a0 error:(id *)a1;
- (BOOL)stashChange:(id)a0 error:(id *)a1;

@end
