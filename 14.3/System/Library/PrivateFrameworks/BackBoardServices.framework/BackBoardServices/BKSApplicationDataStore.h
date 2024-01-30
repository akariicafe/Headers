@class NSString, FBSApplicationDataStore;

@interface BKSApplicationDataStore : NSObject {
    FBSApplicationDataStore *_fbsApplicationDataStore;
}

@property (readonly, nonatomic) NSString *bundleID;

+ (void)setPrefetchedKeys:(id)a0;
+ (id)storeForApplication:(id)a0;
+ (void)synchronize;
+ (id)applicationsWithAvailableStores;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)setArchivedObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)_initWithFBSApplicationDataStore:(id)a0;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (id)archivedObjectForKey:(id)a0;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;

@end
