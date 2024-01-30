@interface GEONavdCacheDBReader : GEODBReader {
    struct sqlite3_stmt { } *_sqlReadAllEntries;
    struct sqlite3_stmt { } *_sqlReadEntriesForHash;
    struct sqlite3_stmt { } *_sqlReadKeysForHash;
    struct sqlite3_stmt { } *_sqlReadNextTimerTimeStamp;
    struct sqlite3_stmt { } *_sqlReadEntriesBeforeTimeStamp;
    struct sqlite3_stmt { } *_sqlReadRowIdsOfEntriesBeforeTimeStamp;
    struct sqlite3_stmt { } *_sqlReadEntryWithRowId;
    struct sqlite3_stmt { } *_sqlCountEntries;
}

- (long long)_numberOfEntries;
- (void)_allCacheEntriesWithHandler:(id /* block */)a0;
- (void)_cacheEntriesBeforeTimeStamp:(double)a0 withHandler:(id /* block */)a1;
- (void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)a0 withHandler:(id /* block */)a1;
- (void)_cacheEntryForNextRefreshWithHandler:(id /* block */)a0;
- (void)_cacheEntriesForHash:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (void)_closeDB;
- (void)_openDBIfNotAlreadyOpen;
- (void)_cacheKeysForHash:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (void)_cacheEntryWithRowId:(long long)a0 handler:(id /* block */)a1;
- (void)_openDB;
- (void)dealloc;

@end
