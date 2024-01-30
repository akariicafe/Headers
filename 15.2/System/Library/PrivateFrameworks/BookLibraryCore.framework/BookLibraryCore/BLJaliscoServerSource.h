@class NSString, NSPersistentStoreCoordinator, NSPersistentHistoryToken, NSManagedObjectModel;

@interface BLJaliscoServerSource : NSObject {
    long long _modelSentinel;
    long long _pscSentinel;
    NSPersistentStoreCoordinator *_psc;
    NSManagedObjectModel *_model;
}

@property (retain, nonatomic) NSString *databaseContainerPath;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSPersistentHistoryToken *currentJaliscoHistoryToken;

+ (id)sharedSource;
+ (void)preWarmSync;
+ (void)setSharedSource:(id)a0;

- (BOOL)_setupCoreDataStack;
- (id)newManagedObjectContext;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)managedObjectModel;
- (id)_persistentStoreOptions;
- (id)initWithIdentifier:(id)a0 databaseContainerPath:(id)a1;
- (id)p_oldPersistentStoreDirectory;
- (id)p_persistentStoreDirectory;
- (id)p_persistentStoreFullPathAtPrivateiBooksLocation;
- (id)p_persistentStoreFullPathAtSharediBooksLocation;
- (id)persistentStoreCoordinatorWithError:(id *)a0;
- (BOOL)p_databaseExistsAtSharediBooksContainerLocation;
- (BOOL)p_databaseExistsAtPrivateiBooksContainerLocation;
- (BOOL)p_createPersistentDirectoryIfNeeded;
- (id)existingServerInfoWithPredicate:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)existingServerDatabaseWithPredicate:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)existingEntitiesWithName:(id)a0 matchingPredicate:(id)a1 fromManagedObjectContext:(id)a2 limit:(unsigned long long)a3 error:(id *)a4;
- (id)existingServerItemWithPredicate:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)_itemsFetchRequestIncludingHiddenItems:(BOOL)a0 dsids:(id)a1;
- (id)predicateForItems:(BOOL)a0 dsids:(id)a1;
- (id)itemsFetchRequestForDSIDs:(id)a0;
- (id)allItemsFetchRequestForDSIDs:(id)a0;
- (id)predicateForNeedsImport:(BOOL)a0;
- (id)fetchRequestForAllStoreIDs:(id)a0 dsids:(id)a1 isImported:(BOOL)a2 includeHidden:(BOOL)a3;
- (id)fetchRequestForAllStoreIDs:(id)a0 dsids:(id)a1;
- (BOOL)workaround_18397698;
- (id)newManagedObjectContextWithPrivateQueueConcurrency;
- (id)serverInfoForDSID:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)truncateDatabaseError:(id *)a0;
- (void)refreshStoreWithCompletion:(id /* block */)a0;
- (id)serverDatabaseForDSID:(id)a0 fromManagedObjectContext:(id)a1 error:(id *)a2;
- (id)serverDatabaseForDSID:(id)a0 withIdentifier:(id)a1 fromManagedObjectContext:(id)a2 error:(id *)a3;
- (id)serverItemWithStoreID:(id)a0 inDatabaseWithIdentifier:(id)a1 forDSID:(id)a2 fromManagedObjectContext:(id)a3 error:(id *)a4;
- (id)fetchRequestForAllCloudIDs:(id)a0 dsids:(id)a1;
- (id)fetchRequestForStoreIDs:(id)a0 dsids:(id)a1;
- (id)fetchRequestForAllStoreIDs:(id)a0;
- (id)fetchRequestForNeedsImport:(BOOL)a0;
- (id)fetchRequestForAllStoreIDs:(id)a0 dsids:(id)a1 isImported:(BOOL)a2;
- (id)fetchRequestForBuyParameters:(id)a0;
- (id)fetchRequestForNotInStoreAccountIDs:(id)a0;
- (id)predicateForStoreAccountID:(id)a0 storeIDs:(id)a1;

@end
