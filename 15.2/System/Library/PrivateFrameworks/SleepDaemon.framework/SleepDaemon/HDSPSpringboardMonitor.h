@class HKSPObserverSet;

@interface HDSPSpringboardMonitor : NSObject

@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) BOOL springboardStarted;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } springboardStartedLock;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) BOOL isSpringboardStarted;

- (void)_stopMonitoring;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)_checkSpringBoardStarted;
- (void)_checkAndNotify;
- (id)initWithCallbackScheduler:(id)a0 isAppleWatch:(BOOL)a1;
- (void).cxx_destruct;
- (void)_startMonitoring;
- (id)_processName;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;

@end
