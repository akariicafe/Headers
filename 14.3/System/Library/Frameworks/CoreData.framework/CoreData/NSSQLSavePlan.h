@class NSSaveChangesRequest, NSMutableDictionary, NSSQLSaveChangesRequestContext, NSMutableSet, NSMutableArray, NSManagedObjectContext;

@interface NSSQLSavePlan : NSObject {
    NSSQLSaveChangesRequestContext *_requestContext;
    struct __CFDictionary { } *_changeCache;
    struct __CFDictionary { } *_insertCache;
    struct __CFDictionary { } *_toManyCache;
    NSMutableArray *_rowsToDelete;
    NSMutableSet *_updatedByRequest;
    NSMutableSet *_updatedByForeignKey;
    NSMutableSet *_rowsToAddToRowCache;
    struct __CFDictionary { } *_updatedFOKRowsInCurrentSave;
    struct __CFDictionary { } *_deletedFOKRowsInCurrentSave;
    NSMutableDictionary *_toManyRelationshipChanges;
    int _transactionInMemorySequence;
    struct _sqlSaveFlags { unsigned char notifyFOKChanges : 1; unsigned char hasChanges : 1; unsigned int reserved : 30; } _flags;
}

@property (readonly, nonatomic) NSSaveChangesRequest *saveRequest;
@property (readonly, nonatomic) NSManagedObjectContext *savingContext;
@property (nonatomic) int transactionInMemorySequence;
@property (readonly, nonatomic) NSMutableArray *externalDataReferencesToSave;
@property (readonly, nonatomic) NSMutableArray *externalDataReferencesToDelete;
@property (readonly, nonatomic) NSMutableArray *fileBackedFuturesToCopy;
@property (readonly, nonatomic) NSMutableArray *fileBackedFuturesToDelete;
@property (readonly, nonatomic) NSMutableDictionary *usedIndexes;

- (id)entityForEntityDescription:(id)a0;
- (void)_addFileBackedFutureToDelete:(id)a0;
- (void)_addFileBackedFutureToCopy:(id)a0;
- (void)_createCorrelationTrackerUpdatesForDeletedObject:(id)a0;
- (id)newDeletedRows;
- (unsigned int)_orderKeyForObject:(id)a0 fromSourceObjectID:(id)a1 inverseRelationship:(id)a2 inOrderedSet:(id)a3;
- (void)prepareRows;
- (id)newObjectsForFastLockConflictDetection;
- (id)_entityForObject:(id)a0;
- (void)dealloc;
- (unsigned int)_knownEntityKeyForObjectID:(id)a0;
- (unsigned int)_knownEntityKeyForObject:(id)a0;
- (void)_addExternalReferenceDataToDelete:(id)a0;
- (void)_createRowsForSave;
- (void)_prepareForDeletionOfDatabaseExternalPropertiesForObject:(id)a0;
- (id)newRowsToAddToRowCache;
- (void)_populateRow:(id)a0 fromObject:(id)a1 timestamp:(double)a2 inserted:(BOOL)a3 shouldAddToRowCache:(BOOL *)a4;
- (id)_findOrCreateChangeSnapshotForGlobalID:(id)a0;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)a0 rowCacheOriginal:(id)a1 originalOrderKeys:(id)a2 originalSnapshot:(id)a3 value:(id)a4 added:(id)a5 deleted:(id)a6 sourceRowPK:(long long)a7 properties:(id)a8 sourceObject:(id)a9 newIndexes:(unsigned long long **)a10 reorderedIndexes:(char **)a11;
- (unsigned int)_knownOrderKeyForObject:(id)a0 from:(id)a1 inverseToMany:(id)a2;
- (long long)_knownPrimaryKeyForObject:(id)a0;
- (id)foreignOrderKeysBeingDeleted;
- (id)newPrimaryUpdatedRows;
- (id)foreignOrderKeysBeingUpdated;
- (id)newInsertedRows;
- (void)_populateOrderKeysInOrderedSet:(id)a0 usingSourceObjectID:(id)a1 inverseRelationship:(id)a2 newIndexes:(unsigned long long **)a3 reorderedIndexes:(char **)a4;
- (void)_recordToManyChangesForObject:(id)a0 inRow:(id)a1 usingTimestamp:(double)a2 inserted:(BOOL)a3;
- (id)newObjectsForExhaustiveLockConflictDetection;
- (id)_correlationTableUpdateTrackerForRelationship:(id)a0;
- (void)_prepareForDeletionOfExternalDataReferencesForObject:(id)a0;
- (void)_registerChangedFOKs:(id)a0 deletions:(id)a1 forSourceObject:(id)a2 andRelationship:(id)a3;
- (id)newObjectsForUniquenessConflictDetectionGivenReportedFailures:(id)a0;
- (id)newAncillaryUpdatedRows;
- (id)newCorrelationTableUpdates;
- (void)_addExternalReferenceDataToSave:(id)a0;
- (id)toManyRelationshipChanges;
- (id)initForRequestContext:(id)a0;
- (void)_prepareForDeletionOfFileBackedFuturesForObject:(id)a0;
- (void)_computeUpdatedRowSplit;
- (long long)_knownPrimaryKeyForObjectID:(id)a0;
- (BOOL)hasChangesForWriting;

@end
