@class _PFModelMap, NSArray, NSDictionary, NSManagedObjectModel, NSString, NSMutableArray, NSError;
@protocol NSPersistentStoreCoordinatorDelegate;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
    id _queueOwner;
    void *_dispatchQueue;
    struct _persistentStoreCoordinatorFlags { unsigned char _isRegistered : 1; unsigned char _canUseDirectDispatch : 1; unsigned char _queueUsage : 1; unsigned char _qosClass : 8; unsigned int _reservedFlags : 21; } _flags;
    int _cd_rc;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _miniLock;
    NSManagedObjectModel *_managedObjectModel;
    NSArray *_persistentStores;
    NSString *_queueLabel;
    NSMutableArray *_extendedStoreURLs;
    NSError *_lastOpenError;
    id _xpcBundleID;
    NSString *_xpcProcessName;
    _PFModelMap *_modelMap;
    id<NSPersistentStoreCoordinatorDelegate> _delegate;
}

@property (class, readonly) NSDictionary *registeredStoreTypes;

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly) NSArray *persistentStores;
@property (copy) NSString *name;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)metadataForPersistentStoreOfType:(id)a0 URL:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreOfType:(id)a1 URL:(id)a2 error:(id *)a3;
+ (id)alloc;
+ (id)ubiquityStoreURLForStoreURL:(id)a0 ubiquityIdentityToken:(id)a1 ubiquityName:(id)a2;
+ (void)_registerCoreDataStoreClass:(Class)a0 forStoreType:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)metadataForPersistentStoreOfType:(id)a0 URL:(id)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)removePersistentHistoryFromPersistentStoreAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)registerStoreClass:(Class)a0 forStoreType:(id)a1;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreOfType:(id)a1 URL:(id)a2 options:(id)a3 error:(id *)a4;

- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (BOOL)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (BOOL)_replacePersistentStoreAtURL:(id)a0 destinationOptions:(id)a1 withPersistentStoreFromURL:(id)a2 sourceOptions:(id)a3 storeType:(id)a4 error:(id *)a5;
- (BOOL)replacePersistentStoreAtURL:(id)a0 destinationOptions:(id)a1 withPersistentStoreFromURL:(id)a2 sourceOptions:(id)a3 storeType:(id)a4 error:(id *)a5;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)unlock;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (id)_allOrderKeysForDestination:(id)a0 inRelationship:(id)a1 error:(id *)a2;
- (void)performBlock:(id /* block */)a0;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (BOOL)tryLock;
- (id)addPersistentStoreWithType:(id)a0 configuration:(id)a1 URL:(id)a2 options:(id)a3 error:(id *)a4;
- (unsigned long long)retainCount;
- (void)lock;
- (id)retain;
- (void)setDelegate:(id)a0;
- (void)addPersistentStoreWithDescription:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)destroyPersistentStoreAtURL:(id)a0 withType:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_isDeallocating;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (id)managedObjectIDForURIRepresentation:(id)a0;
- (id)_retainedCurrentQueryGeneration:(id)a0;
- (id)currentPersistentHistoryTokenFromStores:(id)a0;
- (BOOL)setURL:(id)a0 forPersistentStore:(id)a1;
- (id)initWithManagedObjectModel:(id)a0;
- (id)persistentStoreForIdentifier:(id)a0;
- (id)persistentStoreForURL:(id)a0;
- (BOOL)_removeAllPersistentStores:(id *)a0;
- (BOOL)removePersistentStore:(id)a0 error:(id *)a1;
- (BOOL)_validateQueryGeneration:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)URLForPersistentStore:(id)a0;
- (void)setMetadata:(id)a0 forPersistentStore:(id)a1;
- (BOOL)_destroyPersistentStoreAtURL:(id)a0 withType:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_exceptionNoStoreSaveFailureForError:(id)a0 recommendedFrame:(int *)a1;
- (id)metadataForPersistentStore:(id)a0;
- (id)migratePersistentStore:(id)a0 toURL:(id)a1 options:(id)a2 withType:(id)a3 error:(id *)a4;
- (id)currentQueryGenerationTokenFromStores:(id)a0;
- (BOOL)_destroyPersistentStoreAtURL:(id)a0 withType:(id)a1 error:(id *)a2;
- (BOOL)_rekeyPersistentStoreAtURL:(id)a0 type:(id)a1 options:(id)a2 withKey:(id)a3 error:(id *)a4;
- (BOOL)_refreshTriggerValuesInStore:(id)a0 error:(id *)a1;
- (BOOL)finishDeferredLightweightMigration:(id *)a0;
- (BOOL)finishDeferredLightweightMigrationTask:(id *)a0;
- (BOOL)_tryRetain;
- (void)performBlockAndWait:(id /* block */)a0;
- (oneway void)release;

@end
