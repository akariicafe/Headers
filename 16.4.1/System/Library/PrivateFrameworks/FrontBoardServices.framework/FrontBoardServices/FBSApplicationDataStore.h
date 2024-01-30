@class NSString;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStore : NSObject {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
}

@property (readonly, nonatomic) NSString *bundleID;

+ (void)_doWithClassClient:(id /* block */)a0;
+ (void)synchronize;
+ (void)synchronizeWithCompletion:(id /* block */)a0;
+ (BOOL)isServerProcess;
+ (id)storeForApplication:(id)a0;
+ (id)applicationsWithAvailableStores;
+ (void)_setClassClient:(id)a0;
+ (void)setPrefetchedKeys:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)deserializeObjectForKey:(id)a0 ofType:(Class)a1;
- (id)_initWithBundleId:(id)a0 client:(id)a1;
- (id)archivedObjectForKey:(id)a0;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (void)deserializeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)serializeObject:(id)a0 forKey:(id)a1;

@end
