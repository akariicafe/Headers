@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface VTEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_startMonitoringWithQueue:(id)a0;
- (void)notifyObserver:(id)a0;
- (void)_stopMonitoring;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateObservers:(id /* block */)a0;
- (void)dealloc;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end
