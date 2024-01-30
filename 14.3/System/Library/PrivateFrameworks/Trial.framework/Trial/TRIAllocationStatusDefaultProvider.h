@class _PASLock, _PASXPCClientHelper;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper *_clientHelper;
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)removeUpdateHandlerForToken:(id)a0;
- (id)_defaultQueue;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateActiveExperimentsForEnvironment:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)addStatusUpdateHandlerForEnvironment:(int)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;

@end
