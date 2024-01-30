@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSNumber, NSManagedObjectContext;

@interface BLJaliscoReadOnlyDAAPClient : NSObject <BUUserAccountObserving>

@property (retain, nonatomic) NSManagedObjectModel *model;
@property (retain, nonatomic) NSPersistentStoreCoordinator *psc;
@property (retain, nonatomic) NSManagedObjectContext *moc;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *databaseContainerPath;
@property (retain, nonatomic) NSNumber *currentAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;
+ (id)predicateForNonExplicitItems;
+ (id)sortByTitleDescriptor;

- (void).cxx_destruct;
- (void)dealloc;
- (void)userAccount:(unsigned long long)a0 didChangeWithReason:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 databaseContainerPath:(id)a1;
- (id)p_persistentStoreDirectory;
- (id)p_persistentStoreFullPathAtSharediBooksLocation;
- (BOOL)p_createPersistentDirectoryIfNeeded;
- (id)predicateForItems:(BOOL)a0 dsids:(id)a1;
- (id)fetchItemsForStoreIDs:(id)a0;
- (BOOL)_setupCoreDataStack;
- (id)p_allItemsFetchRequestForDSIDs:(id)a0;
- (id)p_allItemsFetchRequestForDSIDs:(id)a0 matchingSearchString:(id)a1 isExplicitRestricted:(BOOL)a2;
- (id)p_fetchRequestForStoreIDs:(id)a0 dsids:(id)a1;
- (id)_itemsFetchRequestForDSIDs:(id)a0 excludeStoreIDs:(id)a1 isExplicitRestricted:(BOOL)a2;
- (id)p_itemsFetchRequestIncludingHiddenItems:(BOOL)a0 dsids:(id)a1;
- (id)predicateToExcludeStoreIDs:(id)a0;
- (id)fetchAllServerItemsForDSIDs:(id)a0;
- (id)fetchAllServerItemsWithPredicate:(id)a0 sortDescriptor:(id)a1;
- (id)searchAllServerItemsForDSIDs:(id)a0 matchingSearchString:(id)a1 isExplicitRestricted:(BOOL)a2;
- (id)fetchServerItemsForStoreIDs:(id)a0 andDSIDS:(id)a1;
- (id)fetchItemsForDSIDs:(id)a0 excludeStoreIDs:(id)a1 isExplicitRestricted:(BOOL)a2;

@end
