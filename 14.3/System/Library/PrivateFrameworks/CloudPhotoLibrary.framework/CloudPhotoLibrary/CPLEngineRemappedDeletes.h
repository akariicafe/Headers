@class NSString, NSMutableDictionary, CPLPlatformObject;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)a0 realScopedIdentifier:(id)a1 asap:(BOOL)a2;
- (void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)a0;
- (id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)a0 fallback:(id)a1;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)a0;

@end
