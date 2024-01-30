@class NSString, br_pacer;

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
@property (retain, nonatomic) NSString *assertionPersonaIdentifier;

- (BOOL)_shouldFlushWithChangeCount:(int)a0;
- (void)autovacuumIfNeeded;
- (BOOL)executeWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (BOOL)_validateIsRunningWithCorrectPersona;
- (long long)sizeInBytes;
- (BOOL)attachDBAtPath:(id)a0 as:(id)a1 error:(id *)a2;
- (id)fetchWithSlowStatementRadar:(id)a0 objectOfClass:(Class)a1 sql:(id)a2;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1 args:(char *)a2;
- (BOOL)execute:(id)a0;
- (void)_setLockedHandler;
- (void)disableProfilingForQueriesInBlock:(id /* block */)a0;
- (BOOL)executeRaw:(id)a0;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2 args:(char *)a3;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1;
- (BOOL)needsAutovacuum;
- (BOOL)openAtURL:(id)a0 withFlags:(int)a1 error:(id *)a2;
- (void)usePacedBatchingOnTargetQueue:(id)a0 withInterval:(double)a1 changeCount:(int)a2;
- (id)fetch:(id)a0;
- (id)fetch:(id)a0 args:(char *)a1;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)a0;
- (BOOL)executeWithErrorHandler:(id /* block */)a0 sql:(id)a1;
- (void).cxx_destruct;
- (id)fetchWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (BOOL)execute:(id)a0 args:(char *)a1;
- (id)init;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1 args:(char *)a2;
- (BOOL)executeWithExpectedIndex:(id)a0 sql:(id)a1;
- (long long)changes;
- (id)initWithLabel:(id)a0 dbCorruptionHandler:(id /* block */)a1;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (void)setProfilingHook:(id /* block */)a0;
- (void)assertOnQueue;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1;
- (void)brc_close;

@end
