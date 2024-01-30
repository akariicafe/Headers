@class _PASLock, _PASXPCClientHelper;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper *_clientHelper;
    _PASXPCClientHelper *_internalHelper;
    _PASLock *_lock;
}

- (BOOL)removeUpdateHandlerForToken:(id)a0;
- (id)activeExperimentInformationWithError:(id *)a0;
- (id)addStatusUpdateHandlerForEnvironment:(int)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateActiveRolloutsWithError:(id *)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)enumerateActiveExperimentsForEnvironment:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)dealloc;
- (id)_defaultQueue;

@end
