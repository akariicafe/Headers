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

- (void)assertOnQueue;
- (long long)changes;
- (long long)sizeInBytes;
- (BOOL)execute:(id)a0;
- (id)init;
- (id)fetch:(id)a0;
- (void).cxx_destruct;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1;
- (BOOL)needsAutovacuum;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)a0;
- (void)_setLockedHandler;
- (BOOL)_shouldFlushWithChangeCount:(int)a0;
- (BOOL)_validateIsRunningWithCorrectPersona;
- (BOOL)attachDBAtPath:(id)a0 as:(id)a1 error:(id *)a2;
- (void)autovacuumIfNeeded;
- (void)brc_close;
- (BOOL)brc_closeWithError:(id *)a0;
- (void)disableProfilingForQueriesInBlock:(id /* block */)a0;
- (BOOL)execute:(id)a0 args:(char *)a1;
- (BOOL)executeRaw:(id)a0;
- (BOOL)executeWithErrorHandler:(id /* block */)a0 sql:(id)a1;
- (BOOL)executeWithExpectedIndex:(id)a0 sql:(id)a1;
- (BOOL)executeWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (id)fetch:(id)a0 args:(char *)a1;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1;
- (id)fetchObject:(id /* block */)a0 sql:(id)a1 args:(char *)a2;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2;
- (id)fetchObjectOfClass:(Class)a0 initializer:(SEL)a1 sql:(id)a2 args:(char *)a3;
- (id)fetchObjectOfClass:(Class)a0 sql:(id)a1 args:(char *)a2;
- (id)fetchWithSlowStatementRadar:(id)a0 objectOfClass:(Class)a1 sql:(id)a2;
- (id)fetchWithSlowStatementRadar:(id)a0 objectWithConstructor:(id /* block */)a1 sql:(id)a2;
- (id)fetchWithSlowStatementRadar:(id)a0 sql:(id)a1;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (id)initWithLabel:(id)a0 dbCorruptionHandler:(id /* block */)a1;
- (BOOL)openAtURL:(id)a0 withFlags:(int)a1 error:(id *)a2;
- (void)setProfilingHook:(id /* block */)a0;
- (void)usePacedBatchingOnTargetQueue:(id)a0 withInterval:(double)a1 changeCount:(int)a2;

@end
