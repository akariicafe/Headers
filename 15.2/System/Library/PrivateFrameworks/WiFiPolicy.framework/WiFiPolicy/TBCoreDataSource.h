@class NSString, TBPersistenceManager, TBCoreDataStoreDescriptor, NSManagedObjectContext;

@interface TBCoreDataSource : TBDataSource <TBCacheProvider>

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) TBPersistenceManager *persistenceManager;
@property (retain, nonatomic) TBCoreDataStoreDescriptor *descriptor;
@property (nonatomic) BOOL hasStorageError;
@property (nonatomic) unsigned long long cacheExpirationInDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeFetchRequest:(id)a0;
- (void)cacheFetchResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)_executePreferLocalFetchRequest:(id)a0;
- (void)prune3BarsNetworks:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_canSupportRequest:(id)a0;
- (id)initWithStoreDescriptor:(id)a0;
- (void)importObjectsWithArray:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeWithFetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)type;
- (void)removeAllWithCompletionHandler:(id /* block */)a0;
- (void)_createNewNetworkFromDictionary:(id)a0 withMOC:(id)a1;
- (void)_executeFetchRequest:(id)a0;
- (void)_createNewNetwork:(id)a0 tile:(id)a1 withMOC:(id)a2;

@end
