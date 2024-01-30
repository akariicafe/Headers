@class NSString, NSHashTable;
@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {
    id<FBSApplicationDataStoreRepositoryClient> _client;
    BOOL _clientNeedsCheckin;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)applicationDataStoreRepositoryClient:(id)a0 application:(id)a1 changedObject:(id)a2 forKey:(id)a3;
- (void)applicationDataStoreRepositoryClient:(id)a0 storeInvalidatedForApplication:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)_hasObserver:(id)a0;

@end
