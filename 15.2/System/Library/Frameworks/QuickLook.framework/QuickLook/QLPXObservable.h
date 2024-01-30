@class NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface QLPXObservable : NSObject {
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

@property (readonly, nonatomic) unsigned long long currentChanges;

- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_publishChanges;
- (void)performChanges:(id /* block */)a0;
- (void)didPublishChanges;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)signalChange:(unsigned long long)a0;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)_didChange;
- (void)_willChange;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_applyPendingChanges;
- (void)willPerformChanges;

@end
