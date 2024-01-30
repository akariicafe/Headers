@class _PASLock, _PASXPCClientHelper;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper *_clientHelper;
    _PASXPCClientHelper *_internalHelper;
    _PASLock *_lock;
}

- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)_defaultQueue;
- (void)dealloc;
- (BOOL)enumerateSampledActiveRolloutsForCorrelationID:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)removeUpdateHandlerForToken:(id)a0;
- (id)activeExperimentInformationWithError:(id *)a0;
- (BOOL)enumerateSampledActiveExperimentsForEnvironment:(int)a0 correlationID:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)init;
- (BOOL)enumerateActiveRolloutsWithError:(id *)a0 block:(id /* block */)a1;
- (BOOL)enumerateActiveExperimentsForEnvironment:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)addStatusUpdateHandlerForEnvironment:(int)a0 queue:(id)a1 block:(id /* block */)a2;

@end
