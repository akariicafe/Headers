@class NSObject, MTObserverStore;
@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)_checkSpringBoardStarted;
- (void)didReceiveSpringboardStarted:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateObservers:(id /* block */)a0;
- (BOOL)isSpringboardStarted;
- (void)dealloc;

@end
