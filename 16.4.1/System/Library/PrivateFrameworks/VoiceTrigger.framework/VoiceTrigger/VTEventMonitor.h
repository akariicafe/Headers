@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface VTEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)notifyObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end
