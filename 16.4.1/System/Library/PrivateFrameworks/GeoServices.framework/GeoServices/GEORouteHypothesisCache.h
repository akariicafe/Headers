@class NSString, GEONavdCachePersistenceManager;

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {
    GEONavdCachePersistenceManager *_persistenceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (double)nextRefreshTimeStamp;
- (id)descriptionOfAllEntries;
- (void)dealloc;
- (id)loadEntryForRowId:(long long)a0;
- (void)saveValue:(id)a0 forKey:(id)a1;
- (id)init;
- (void)_removeAllEntries;
- (long long)numberOfEntriesOnDisk;
- (void)removeKey:(id)a0 value:(id)a1;
- (id)loadValueForKey:(id)a0;
- (void).cxx_destruct;

@end
