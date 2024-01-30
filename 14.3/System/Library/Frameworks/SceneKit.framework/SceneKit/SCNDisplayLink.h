@class NSObject, SCNRecursiveLock, CADisplayLink;
@protocol OS_dispatch_queue;

@interface SCNDisplayLink : NSObject {
    CADisplayLink *_caDisplayLink;
    BOOL _supportTargetTimestamp;
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

- (id)init;
- (void)_cleanup;
- (void)dealloc;
- (void)setNeedsDisplay;
- (BOOL)_isInvalidated;
- (void)invalidate;
- (id)initWithQueue:(id)a0 screen:(id)a1 block:(id /* block */)a2;
- (BOOL)setPaused:(BOOL)a0 nextFrameTimeHint:(double)a1 lastUpdate:(double)a2;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)a0;
- (int)queuedFrameCount;

@end
