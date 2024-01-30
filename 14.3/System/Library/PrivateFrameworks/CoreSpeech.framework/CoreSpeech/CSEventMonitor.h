@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (unsigned long long)type;
- (void)notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end
