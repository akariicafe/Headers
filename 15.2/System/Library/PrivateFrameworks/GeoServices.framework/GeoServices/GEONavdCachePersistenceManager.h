@class NSObject, GEONavdCacheDBReader, GEONavdCacheDBWriter;
@protocol OS_dispatch_queue;

@interface GEONavdCachePersistenceManager : NSObject {
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)tearDown;
- (long long)_numberOfEntries;
- (id)initWithPath:(id)a0;
- (void)_removeAllEntries;
- (void)_enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (long long)_dumpToDiskWithKey:(id)a0 value:(id)a1;
- (void)_deleteFromDiskWithKey:(id)a0;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)a0;
- (void)_deleteRowWithRowId:(long long)a0;
- (long long)_threadUnsafeRowIdOfKey:(id)a0;
- (void)_removeOldFormatCacheFromPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_enumerateAllEntriesWithHandler:(id /* block */)a0;
- (long long)_rowIdOfKey:(id)a0;
- (id)_entryWithRowId:(long long)a0;
- (double)_nextTimeStampForRefreshTimer;
- (id)_readValueWithKey:(id)a0;

@end
