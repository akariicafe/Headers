@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface AXPhoenixEventMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (void)notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end
