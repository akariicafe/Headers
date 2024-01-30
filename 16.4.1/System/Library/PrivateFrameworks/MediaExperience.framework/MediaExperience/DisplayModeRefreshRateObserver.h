@class CADisplay, NSObject;
@protocol OS_dispatch_queue;

@interface DisplayModeRefreshRateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _refreshRate;
    CADisplay *_tvOutDisplay;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (double)readHDMILatencyFromCoreAnimation;
- (int)updateHDMILatencyOnCoreAnimation:(double)a0;

@end
