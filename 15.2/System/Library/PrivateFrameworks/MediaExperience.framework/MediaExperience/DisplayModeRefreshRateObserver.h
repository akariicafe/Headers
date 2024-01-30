@class CADisplay, NSObject;
@protocol OS_dispatch_queue;

@interface DisplayModeRefreshRateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _refreshRate;
    CADisplay *_tvOutDisplay;
}

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (int)updateHDMILatencyOnCoreAnimation:(double)a0;
- (double)readHDMILatencyFromCoreAnimation;

@end
