@class GEOSQLiteDB;

@interface MNTimeballCache : NSObject {
    GEOSQLiteDB *_db;
}

- (id)initWithDBFilePath:(id)a0;
- (void)pruneCache:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearCache:(id /* block */)a0;
- (void)setRouteUpdate:(id)a0 forDestination:(id)a1 completionBlock:(id /* block */)a2;
- (void)getEntriesUpdatedAfter:(id)a0 entryBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)getEntryForDestination:(id)a0 completionBlock:(id /* block */)a1;
- (void)setNextRefreshDate:(id)a0 forDestination:(id)a1 completionBlock:(id /* block */)a2;
- (void)getEntriesScheduledForRefreshAfter:(id)a0 entryBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (BOOL)_setupDBWithDrop:(BOOL)a0;
- (id /* block */)_errorBlockWithCompletionBlock:(id /* block */)a0;
- (void)_handleResult:(BOOL)a0 forStatement:(id)a1 error:(id)a2 completionBlock:(id /* block */)a3;
- (void)deleteRouteUpdateForDestination:(id)a0 completionBlock:(id /* block */)a1;

@end
