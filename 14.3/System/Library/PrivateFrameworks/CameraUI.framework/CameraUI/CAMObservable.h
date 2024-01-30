@class NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CAMObservable : NSObject {
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

- (id)init;
- (void).cxx_destruct;
- (void)didPerformChanges;
- (void)didPublishChanges;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)willPerformChanges;
- (void)_publishChanges;
- (void)_applyPendingChanges;
- (void)_didChange;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)signalChange:(unsigned long long)a0;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_willChange;

@end
