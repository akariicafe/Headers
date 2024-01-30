@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject {
    TSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
}

- (void)stopObserving;
- (void)beginObserving;
- (void)dealloc;
- (void)_periodicallySimulateMemoryWarning:(id)a0;
- (void)_simulateMemoryWarning:(id)a0;
- (id)initWithFlushingManager:(id)a0;

@end
