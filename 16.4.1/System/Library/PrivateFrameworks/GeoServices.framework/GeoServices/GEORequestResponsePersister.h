@class GEOSQLiteDB, NSObject;
@protocol OS_dispatch_source;

@interface GEORequestResponsePersister : NSObject {
    GEOSQLiteDB *_db;
    NSObject<OS_dispatch_source> *_pruneTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_runAllPruners:(id *)a0;
- (void)persistRequestTask:(id)a0 url:(id)a1 request:(id)a2;
- (BOOL)_checkDbIsWriteable:(id *)a0;
- (void)_persistEvent:(id)a0;
- (BOOL)_pruneDBToDefaultAge:(id *)a0;
- (BOOL)_pruneDBToDefaultSize:(id *)a0;
- (BOOL)_pruneDBToSize:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_pruneEntriesOlderThan:(id)a0 error:(id *)a1;
- (void)_reschedulePruner;
- (unsigned int)_restoreOrphanedEntries:(id *)a0;
- (id)enumerateAllEntriesWithBlock:(id /* block */)a0;
- (id)enumerateEntriesInRange:(id)a0 withBlock:(id /* block */)a1;
- (id)enumerateEntriesOfType:(int)a0 inRange:(id)a1 withBlock:(id /* block */)a2;
- (id)enumerateEntriesOfType:(int)a0 withBlock:(id /* block */)a1;
- (id)findRequest:(id)a0 withBlock:(id /* block */)a1;
- (id)findResponse:(id)a0 withBlock:(id /* block */)a1;
- (unsigned long long)getTotalSize:(id *)a0;
- (id)initWritable:(BOOL)a0;
- (void)persistResponseTask:(id)a0 error:(id)a1;
- (void)persistResponseTask:(id)a0 response:(id)a1;
- (void)persistResponseTaskCanceled:(id)a0;
- (BOOL)pruneDBToDefaultAge:(id *)a0;
- (BOOL)pruneDBToDefaultSize:(id *)a0;
- (BOOL)pruneDBToSize:(unsigned long long)a0 error:(id *)a1;
- (BOOL)pruneEntriesOlderThan:(id)a0 error:(id *)a1;
- (unsigned int)restoreOrphanedEntries:(id *)a0;
- (BOOL)runAllPruners:(id *)a0;

@end
