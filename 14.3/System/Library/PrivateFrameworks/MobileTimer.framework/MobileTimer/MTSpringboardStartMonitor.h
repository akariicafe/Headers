@class NSObject, MTObserverStore;
@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (BOOL)_checkSpringBoardStarted;
- (void)didReceiveSpringboardStarted:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isSpringboardStarted;

@end
