@class NSObject, SCNRecursiveLock, CADisplayLink;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SCNDisplayLink : NSObject {
    CADisplayLink *_caDisplayLink;
    BOOL _supportTargetTimestamp;
    double _lastDisplayLinkTime;
    NSObject<OS_dispatch_source> *_coalescingSource;
    id /* block */ _block;
    id /* block */ _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    _Atomic int _queuedFrameCount;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float preferredFrameRate;
@property (copy, nonatomic) id /* block */ adaptativeFrameRate;

- (BOOL)_isInvalidated;
- (void)_cleanup;
- (id)init;
- (void)invalidate;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithQueue:(id)a0 screen:(id)a1 policy:(unsigned long long)a2 block:(id /* block */)a3;
- (BOOL)setPaused:(BOOL)a0 nextFrameTimeHint:(double)a1 lastUpdate:(double)a2;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)a0;
- (int)queuedFrameCount;

@end
