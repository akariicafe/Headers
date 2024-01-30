@class NSString, FBSApplicationDataStore;

@interface BKSApplicationDataStore : NSObject {
    FBSApplicationDataStore *_fbsApplicationDataStore;
}

@property (readonly, nonatomic) NSString *bundleID;

+ (id)applicationsWithAvailableStores;
+ (id)storeForApplication:(id)a0;
+ (void)setPrefetchedKeys:(id)a0;
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
- (void)dealloc;
- (id)_initWithFBSApplicationDataStore:(id)a0;
- (id)archivedObjectForKey:(id)a0;
- (void)objectForKey:(id)a0 withResult:(id /* block */)a1;
- (void)safeObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;
- (void)archivedObjectForKey:(id)a0 withResult:(id /* block */)a1;
- (id)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1;
- (void)safeArchivedObjectForKey:(id)a0 ofType:(Class)a1 withResult:(id /* block */)a2;

@end
