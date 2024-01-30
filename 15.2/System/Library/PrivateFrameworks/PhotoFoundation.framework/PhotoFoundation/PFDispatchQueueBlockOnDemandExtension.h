@class PFExtendedDispatchQueue;

@interface PFDispatchQueueBlockOnDemandExtension : PFDispatchQueueExtension <PFDispatchQueueBlockOnDemandExecuting> {
    PFExtendedDispatchQueue *_queue;
    _Atomic unsigned long long _countToExecute;
    _Atomic unsigned long long _enqueuedCount;
}

- (void)queue:(id)a0 willEnqueueAsync:(id)a1 when:(id /* block */)a2;
- (id)newBlockInfo;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;
- (void)queue:(id)a0 willEnqueueSync:(id)a1;
- (unsigned long long)runOneBlock;
- (unsigned long long)runBlockCount:(unsigned long long)a0;
- (void)_willEnqueueOneBlock;
- (void)installOnQueue:(id)a0;
- (void).cxx_destruct;

@end
