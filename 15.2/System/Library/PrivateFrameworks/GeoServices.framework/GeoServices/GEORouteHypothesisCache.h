@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (id)initWithPath:(id)a0;
- (void)_removeAllEntries;
- (void)removeKey:(id)a0 value:(id)a1;
- (long long)numberOfEntriesOnDisk;
- (id)descriptionOfAllEntries;
- (id)rowIdsOfEntriesBeforeTimeStamp:(double)a0;
- (id)loadEntryForRowId:(long long)a0;
- (double)nextRefreshTimeStamp;
- (void).cxx_destruct;
- (id)init;
- (id)loadValueForKey:(id)a0;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)protectedDataDidBecomeAvailable:(id)a0;

@end
