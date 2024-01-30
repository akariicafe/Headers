@class NSString, CPLPlatformObject, NSMutableSet, NSDate, NSMutableDictionary;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long _currentGeneration;
    NSDate *_transactionStartDate;
    NSMutableSet *_persistedScopedIdentifiers;
    NSMutableDictionary *_pendingTransientStatuses;
    NSMutableSet *_pendingDeletedTransientStatuses;
    NSMutableDictionary *_transientStatuses;
}

@property (readonly, nonatomic) BOOL hasStatusChanges;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)notifyStatusForRecordHasChanged:(id)a0 persist:(BOOL)a1 error:(id *)a2;
- (BOOL)notifyStatusForRecordViewHasChanged:(id)a0 persist:(BOOL)a1 error:(id *)a2;
- (BOOL)notifyStatusForRecordWithScopedIdentifierHasChanged:(id)a0 recordClass:(Class)a1 persist:(BOOL)a2 error:(id *)a3;
- (id)statusChanges;
- (id)_allScopedIdentifierInCollection:(id)a0 withScopeIdentifier:(id)a1;
- (void)_removeStatusesInDictionary:(id)a0 withScopeIdentifier:(id)a1;
- (void)_removeScopedIdentifiersFromSet:(id)a0 withScopeIdentifier:(id)a1;
- (void)resetTransientStatusesWithScopeIdentifier:(id)a0;
- (void)resetAllTransientStatuses;
- (id)statusesForRecordsWithScopedIdentifiers:(id)a0;
- (id)statusesForRecordsWithIdentifiers:(id)a0;
- (BOOL)acknowledgeChangedStatuses:(id)a0 error:(id *)a1;
- (BOOL)discardNotificationForRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (void)_fillStatus:(id)a0 withClientCacheRecordView:(id)a1 cloudCacheRecord:(id)a2 isConfirmed:(BOOL)a3 isStaged:(BOOL)a4 isInIDMapping:(BOOL)a5;
- (void)_fillStatus:(id)a0;
- (id)_statusFromCachesWithRecordScopedIdentifier:(id)a0;
- (id)recordForStatusWithScopedIdentifier:(id)a0;
- (id)recordViewForStatusWithScopedIdentifier:(id)a0;
- (id)allStatusChanges;

@end
