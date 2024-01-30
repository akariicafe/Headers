@class NSMutableArray, ARDisplayLink, ARRollingNumberSeries;

@interface ARRenderSyncScheduler : NSObject {
    ARDisplayLink *_displayLink;
    ARRollingNumberSeries *_latencies;
    NSMutableArray *_blocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _initialLatencyReached;
    BOOL _reportAdjustments;
}

@property double inputJitterBufferInterval;
@property long long expectedFramesPerSecond;
@property double vsyncOffset;
@property BOOL schedulingActive;
@property unsigned long long excessiveCallbackOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExpectedFramesPerSecond:(long long)a0;
- (void)_callback;
- (unsigned long long)_callbackActionForBlockWithLatency:(double)a0;
- (void)_tryNextBlockWithTotalTried:(unsigned long long)a0;
- (void)submitBlock:(id /* block */)a0;

@end
