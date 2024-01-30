@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)init;
- (id)loadEntryForRowId:(long long)a0;
- (void).cxx_destruct;
- (id)descriptionOfAllEntries;
- (id)rowIdsOfEntriesBeforeTimeStamp:(double)a0;
- (void)dealloc;
- (id)loadValueForKey:(id)a0;
- (long long)numberOfEntriesOnDisk;
- (double)nextRefreshTimeStamp;
- (void)tearDown;
- (void)_removeAllEntries;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (void)removeKey:(id)a0 value:(id)a1;

@end
