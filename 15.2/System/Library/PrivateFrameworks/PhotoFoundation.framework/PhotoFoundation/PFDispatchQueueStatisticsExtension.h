@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension {
    _Atomic unsigned long long _enqueuedCount;
    _Atomic unsigned long long _maxEnqueuedCount;
    _Atomic unsigned long long _executingCount;
    _Atomic unsigned long long _completedCount;
    _Atomic unsigned long long _executionTime;
    _Atomic unsigned long long _maxExecutionTime;
    _Atomic unsigned long long _maxWaitTime;
    _Atomic unsigned long long _totalWaitTime;
    unsigned long long _maxEnqueuedCountTrigger;
    unsigned long long _maxExecutionTimeTrigger;
    unsigned long long _maxWaitTimeTrigger;
    unsigned long long _lastLogTime;
}

- (void)queue:(id)a0 willEnqueueAsync:(id)a1 when:(id /* block */)a2;
- (id)newBlockInfo;
- (unsigned long long)enqueuedCount;
- (unsigned long long)executionTime;
- (unsigned long long)maxEnqueuedCount;
- (unsigned long long)executingCount;
- (unsigned long long)maxExecutionTime;
- (unsigned long long)maxWaitTime;
- (unsigned long long)totalWaitTime;
- (void)maxEnqueuedCountIncreased:(id)a0;
- (void)maxExecutionTimeIncreased:(id)a0;
- (void)maxWaitTimeIncreased:(id)a0;
- (BOOL)_updateMaximum:(_Atomic unsigned long long *)a0 value:(unsigned long long)a1;
- (void)blockEnqueued:(id)a0;
- (void)blockCompletedAfterWait:(unsigned long long)a0 executionTime:(unsigned long long)a1 queue:(id)a2;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;
- (void)queue:(id)a0 willEnqueueSync:(id)a1;
- (id)description;
- (unsigned long long)completedCount;
- (void)installOnQueue:(id)a0;
- (id)init;
- (void)queue:(id)a0 skippedExecuting:(id)a1;
- (void)queue:(id)a0 willExecute:(id)a1;
- (BOOL)_shouldLog;
- (Class)blockInfoClass;
- (void)queue:(id)a0 didExecute:(id)a1;

@end
