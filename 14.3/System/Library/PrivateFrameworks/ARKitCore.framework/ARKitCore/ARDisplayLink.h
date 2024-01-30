@class ARRunLoop, CADisplayLink;

@interface ARDisplayLink : NSObject {
    CADisplayLink *_displayLink;
    id /* block */ _callback;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _actualVsyncOffset;
}

@property long long preferredFramesPerSecond;
@property double vsyncOffset;
@property (readonly, nonatomic) ARRunLoop *runloop;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)a0 preferredFramesPerSecond:(long long)a1;
- (id)initWithPreferredFramesPerSecond:(long long)a0 callback:(id /* block */)a1;
- (void)displayLinkCallback;
- (void)invalidate;

@end
