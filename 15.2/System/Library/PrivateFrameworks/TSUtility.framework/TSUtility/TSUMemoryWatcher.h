@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject {
    TSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
}

- (void)stopObserving;
- (void)dealloc;
- (void)beginObserving;
- (id)initWithFlushingManager:(id)a0;
- (void)_periodicallySimulateMemoryWarning:(id)a0;
- (void)_simulateMemoryWarning:(id)a0;

@end
