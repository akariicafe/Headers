@class NSString, NSMutableDictionary, CPLPlatformObject;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeTransactionDidSucceed;
- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)a0;
- (void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)a0 realScopedIdentifier:(id)a1 asap:(BOOL)a2;
- (id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)a0 fallback:(id)a1;

@end
