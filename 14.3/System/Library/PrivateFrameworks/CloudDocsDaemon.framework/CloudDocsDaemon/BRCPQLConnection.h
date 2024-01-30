@class br_pacer;

@interface BRCPQLConnection : PQLConnection {
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    BOOL _flushImmediately;
    BOOL _autovacuumInProgress;
    long long _changesOverride;
}

@property (nonatomic) BOOL profilingEnabled;
@property (readonly, nonatomic) unsigned long long vmStepsExecuted;
@property (copy, nonatomic) id /* block */ lockedHandler;
@property (readonly, nonatomic) BOOL isReadonly;

- (long long)sizeInBytes;
- (void)setProfilingHook:(id /* block */)a0;
- (BOOL)openAtURL:(id)a0 withFlags:(int)a1 error:(id *)a2;
- (void)disableProfilingForQueriesInBlock:(id /* block */)a0;
- (long long)changes;
- (id)init;
- (id)initWithLabel:(id)a0 dbCorruptionHandler:(id /* block */)a1;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)a0;
- (BOOL)executeWithExpectedIndex:(id)a0 sql:(id)a1;
- (void).cxx_destruct;
- (void)usePacedBatchingOnTargetQueue:(id)a0 withInterval:(double)a1 changeCount:(int)a2;
- (void)_setLockedHandler;
- (id)fetchWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (BOOL)executeWithErrorHandler:(id /* block */)a0 sql:(id)a1;
- (BOOL)attachDBAtPath:(id)a0 as:(id)a1 error:(id *)a2;
- (void)brc_close;
- (BOOL)needsAutovacuum;
- (id)fetchWithSlowStatementRadar:(id)a0 objectOfClass:(Class)a1 sql:(id)a2;
- (BOOL)_shouldFlushWithChangeCount:(int)a0;
- (void)autovacuumIfNeeded;
- (BOOL)executeWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (void)flushToMakeEditsVisibleToIPCReaders;

@end
