@class GEOSQLiteDB, NSObject;
@protocol OS_dispatch_source;

@interface GEORequestResponsePersister : NSObject {
    GEOSQLiteDB *_db;
    NSObject<OS_dispatch_source> *_pruneTimer;
}

- (void)persistRequestTask:(id)a0 url:(id)a1 request:(id)a2;
- (void)persistResponseTask:(id)a0 response:(id)a1;
- (void)persistResponseTask:(id)a0 error:(id)a1;
- (void)persistResponseTaskCanceled:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_reschedulePruner;
- (void)_runAllPruners:(id *)a0;
- (void)_persistEvent:(id)a0;
- (unsigned long long)getTotalSize:(id *)a0;
- (void)_pruneDBToDefaultAge:(id *)a0;
- (void)_pruneDBToDefaultSize:(id *)a0;
- (void)_pruneEntriesOlderThan:(id)a0 error:(id *)a1;
- (void)_pruneDBToSize:(unsigned long long)a0 error:(id *)a1;
- (unsigned int)_restoreOrphanedEntries:(id *)a0;
- (id)enumerateAllEntriesWithBlock:(id /* block */)a0;
- (id)enumerateEntriesInRange:(id)a0 withBlock:(id /* block */)a1;
- (id)enumerateEntriesOfType:(int)a0 withBlock:(id /* block */)a1;
- (id)enumerateEntriesOfType:(int)a0 inRange:(id)a1 withBlock:(id /* block */)a2;
- (void)runAllPruners:(id *)a0;
- (id)findRequest:(id)a0 withBlock:(id /* block */)a1;
- (id)findResponse:(id)a0 withBlock:(id /* block */)a1;
- (void)pruneEntriesOlderThan:(id)a0 error:(id *)a1;
- (void)pruneDBToDefaultAge:(id *)a0;
- (void)pruneDBToDefaultSize:(id *)a0;
- (void)pruneDBToSize:(unsigned long long)a0 error:(id *)a1;
- (unsigned int)restoreOrphanedEntries:(id *)a0;
- (void)dealloc;

@end
