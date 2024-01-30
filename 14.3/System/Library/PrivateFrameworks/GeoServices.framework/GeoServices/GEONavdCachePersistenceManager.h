@class NSObject, GEONavdCacheDBReader, GEONavdCacheDBWriter;
@protocol OS_dispatch_queue;

@interface GEONavdCachePersistenceManager : NSObject {
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (long long)_numberOfEntries;
- (void).cxx_destruct;
- (long long)_dumpToDiskWithKey:(id)a0 value:(id)a1;
- (double)_nextTimeStampForRefreshTimer;
- (long long)_rowIdOfKey:(id)a0;
- (void)_enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (id)_readValueWithKey:(id)a0;
- (void)_removeOldFormatCacheFromPath:(id)a0;
- (void)_deleteFromDiskWithKey:(id)a0;
- (id)_entryWithRowId:(long long)a0;
- (void)tearDown;
- (void)_removeAllEntries;
- (long long)_threadUnsafeRowIdOfKey:(id)a0;
- (void)_enumerateAllEntriesWithHandler:(id /* block */)a0;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)a0;
- (void)_deleteRowWithRowId:(long long)a0;

@end
