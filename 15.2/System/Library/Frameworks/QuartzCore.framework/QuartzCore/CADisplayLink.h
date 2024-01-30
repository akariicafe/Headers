@class CADisplay;

@interface CADisplayLink : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) CADisplay *display;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) double maximumRefreshRate;
@property (readonly, nonatomic) double heartbeatRate;
@property (readonly, nonatomic) long long minimumFrameDuration;
@property (readonly, nonatomic) long long actualFramesPerSecond;
@property unsigned int highFrameRateReason;
@property (nonatomic) double timingOffset;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long frameInterval;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;

+ (double)expectedWakeupBeforeCommitDeadline:(double)a0;
+ (BOOL)supportsExpectedWakeupBeforeCommitDeadline;
+ (void)setWillFireHandler:(id /* block */)a0;
+ (void)dispatchDeferredDisplayLinks;
+ (long long)willFireInfoVersion;
+ (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
+ (id)displayLinkWithDisplay:(id)a0 target:(id)a1 selector:(SEL)a2;

- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)_initWithDisplayLinkItem:(void *)a0;
- (void)invalidate;
- (void)dealloc;

@end
