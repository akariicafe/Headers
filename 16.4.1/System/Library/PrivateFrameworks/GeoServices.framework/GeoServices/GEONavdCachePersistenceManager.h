@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (void)removeAllEntries;
- (void)tearDown;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (long long)numberOfEntries;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (double)nextTimeStampForRefreshTimer;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (id)readValueWithKey:(id)a0;
- (id)init;
- (void)deleteFromDiskWithKey:(id)a0;
- (void).cxx_destruct;
- (id)entryWithRowId:(long long)a0;

@end
