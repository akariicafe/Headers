@class NSString, NSArray, NSSet, NSMutableDictionary, NSPersistentStoreCoordinator, NSQueryGenerationToken, NSMutableSet, _PFManagedObjectReferenceQueue, _PFContextMapTable, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
    id _queueOwner;
    int _cd_rc;
    int _spinLock;
    void *_dispatchQueue;
    id _parentObjectStore;
    struct _managedObjectContextFlags { unsigned char _registeredForCallback : 1; unsigned char _propagatesDeletesAtEndOfEvent : 1; unsigned char _exhaustiveValidation : 1; unsigned char _processingChanges : 1; unsigned char _useCommittedSnapshot : 1; unsigned char _registeredUndoTransactionID : 1; unsigned char _retainsAllRegisteredObjects : 1; unsigned char _savingInProgress : 1; unsigned char _wasDisposed : 1; unsigned char _unprocessedChangesPending : 1; unsigned char _isDirty : 1; unsigned char _ignoreUndoCheckpoints : 1; unsigned char _propagatingDeletes : 1; unsigned char _isNSEditorEditing : 1; unsigned char _isMainThreadBlessed : 1; unsigned char _isImportContext : 1; unsigned char _preflightSaveInProgress : 1; unsigned char _disableDiscardEditing : 1; unsigned char _isParentStoreContext : 1; unsigned char _postSaveNotifications : 1; unsigned char _isMerging : 1; unsigned char _concurrencyType : 1; unsigned char _deleteInaccessible : 1; unsigned char _priority : 2; unsigned char _autoMerge : 1; unsigned char _isXPCServerContext : 1; unsigned char _pushSecureDelete : 1; unsigned char _refreshAfterSave : 1; unsigned char _allowAncillary : 1; unsigned char _generatedMutatedIDsNotification : 1; unsigned char _postSavedObjectNotifications : 1; unsigned char _allowAdditionalUserInfoKeys : 1; unsigned int _reservedFlags : 31; } _flags;
    short _undoTransactionID;
    short _ignoreChangeNotification;
    int _lockCount;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_changedObjects;
    NSMutableSet *_lockedObjects;
    NSMutableSet *_refreshedObjects;
    _PFContextMapTable *_infoByGID;
    id *_cachedObsInfoByEntity;
    id _lock;
    double _fetchTimestamp;
    long long _referenceCallbackRegistration;
    _PFManagedObjectReferenceQueue *_referenceQueue;
    NSString *_contextLabel;
    NSArray *_persistentStoreIdentifiers;
    id *_additionalPrivateIvars;
    void *_reserved1;
}

@property (retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain) NSManagedObjectContext *parentContext;
@property (copy) NSString *name;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) unsigned long long concurrencyType;
@property (readonly, nonatomic) NSSet *insertedObjects;
@property (readonly, nonatomic) NSSet *updatedObjects;
@property (readonly, nonatomic) NSSet *deletedObjects;
@property (readonly, nonatomic) NSSet *registeredObjects;
@property (nonatomic) BOOL propagatesDeletesAtEndOfEvent;
@property (nonatomic) BOOL retainsRegisteredObjects;
@property BOOL shouldDeleteInaccessibleFaults;
@property double stalenessInterval;
@property (retain) id mergePolicy;
@property (readonly, nonatomic) NSQueryGenerationToken *queryGenerationToken;
@property (nonatomic) BOOL automaticallyMergesChangesFromParent;
@property (copy) NSString *transactionAuthor;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)new;
+ (id)createFutureForFileAtURL:(id)a0;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_mergeChangesFromRemoteContextSave:(id)a0 intoContexts:(id)a1;
+ (void)mergeChangesFromRemoteContextSave:(id)a0 intoContexts:(id)a1;

- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (void)rollback;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (void)_setDelegate:(id)a0;
- (BOOL)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)unlock;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)_allOrderKeysForDestination:(id)a0 inRelationship:(id)a1 error:(id *)a2;
- (void)performBlock:(id /* block */)a0;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (BOOL)tryLock;
- (void)_noop:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)refreshObject:(id)a0 mergeChanges:(BOOL)a1;
- (unsigned long long)retainCount;
- (BOOL)evictFuture:(id)a0 withError:(id *)a1;
- (void)lock;
- (id)retain;
- (id)description;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (BOOL)save:(id *)a0;
- (BOOL)_isDeallocating;
- (id)objectWithID:(id)a0;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (id)init;
- (id)_queryGenerationToken__;
- (id)objectRegisteredForID:(id)a0;
- (BOOL)setQueryGenerationFromToken:(id)a0 error:(id *)a1;
- (void)detectConflictsForObject:(id)a0;
- (void)processPendingChanges;
- (id)_retainedCurrentQueryGeneration:(id)a0;
- (void)assignObject:(id)a0 toPersistentStore:(id)a1;
- (BOOL)_allowAncillaryEntities;
- (id)initWithCoder:(id)a0;
- (void)undo;
- (void)redo;
- (void)insertObject:(id)a0;
- (void)_setFaultingError:(id)a0;
- (BOOL)shouldHandleInaccessibleFault:(id)a0 forObjectID:(id)a1 triggeredByProperty:(id)a2;
- (id)executeRequest:(id)a0 error:(id *)a1;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (void)discardEditing;
- (void)_forgetObject:(id)a0 propagateToObjectStore:(BOOL)a1 removeFromRegistry:(BOOL)a2;
- (BOOL)_setQueryGenerationFromToken:(id)a0 error:(id *)a1;
- (BOOL)_parentObtainPermanentIDsForObjects:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)commitEditing;
- (void)objectWillChange:(id)a0;
- (id)_changeTrackingToken__;
- (void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)a0;
- (void)mergeChangesFromContextDidSaveNotification:(id)a0;
- (void)_managedObjectContextEditor:(id)a0 didCommit:(BOOL)a1 contextInfo:(struct { id x0; SEL x1; void *x2; } *)a2;
- (void)commitEditingWithDelegate:(id)a0 didCommitSelector:(SEL)a1 contextInfo:(void *)a2;
- (BOOL)_setChangeTrackingTokenFromToken:(id)a0 error:(id *)a1;
- (void)objectDidBeginEditing:(id)a0;
- (void)objectDidEndEditing:(id)a0;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (void)_undoUpdates:(id)a0;
- (void)_setDisableDiscardEditing:(BOOL)a0;
- (id)_retainedObjectsFromRemovedStore:(id)a0;
- (BOOL)_disableDiscardEditing;
- (void)_setAllowAncillaryEntities:(BOOL)a0;
- (void)_undoDeletions:(id)a0;
- (void)_undoInsertions:(id)a0;
- (void)_undoDeletionsMovedToUpdates:(id)a0;
- (BOOL)_performImmediate:(id /* block */)a0;
- (void)_clearChangedThisTransaction:(id)a0;
- (void)_forceInsertionForObject:(id)a0;
- (void)_undoManagerCheckpoint:(id)a0;
- (void)_storeConfigurationChanged:(id)a0;
- (void)_processChangedStoreConfigurationNotification:(id)a0;
- (void)_setAllowsExpandedUserInfoKeys:(BOOL)a0;
- (void)setShouldRefreshAfterSave:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)shouldRefreshAfterSave;
- (id)performBlockWithResult:(id /* block */)a0;
- (id)_orderedSetWithResultsFromFetchRequest:(id)a0;
- (void)_stopConflictDetectionForObject:(id)a0;
- (void)_mergeChangesFromRemoteContextSave:(id)a0;
- (id)_orderKeysForRelationshipWithName__:(id)a0 onObjectWithID:(id)a1;
- (BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)a0 inRelationshipWithName:(id)a1 onObjectWithID:(id)a2 error:(id *)a3;
- (void)refreshAllObjects;
- (BOOL)isEditing;
- (BOOL)shouldPerformSecureOperation;
- (void)dealloc;
- (void)deleteObject:(id)a0;
- (id)_delegate;
- (void)performWithOptions:(unsigned long long)a0 andBlock:(id /* block */)a1;
- (BOOL)_tryRetain;
- (void)reset;
- (void)performBlockAndWait:(id /* block */)a0;
- (oneway void)release;

@end
