@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
}

@property (readonly, nonatomic) NSString *bundleID;

+ (void)synchronizeWithCompletion:(id /* block */)a0;
+ (id)applicationsWithAvailableStores;
+ (id)storeForApplication:(id)a0;
+ (void)_setClassClient:(id)a0;
+ (void)setPrefetchedKeys:(id)a0;
+ (BOOL)isServerProcess;
+ (void)_doWithClassClient:(id /* block */)a0;
+ (void)synchronize;

- (void)removeObjectForKey:(id)a0;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)_initWithBundleId:(id)a0 client:(id)a1;
- (id)_makeSafe:(id)a0 forType:(Class)a1;
- (void)dealloc;
- (id)archivedObjectForKey:(id)a0;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;

@end
