@class CADisplayLink, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBFrameLink : NSObject {
    NSObject<OS_os_log> *_logHandle;
    struct __Display { } *_display;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _fadeCallbackBlock;
    CADisplayLink *_displayLink;
    id /* block */ _frameNotificationBlock;
}

@property (readonly, nonatomic) double targetTimestamp;

- (BOOL)isPaused;
- (void)setPreferredFramesPerSecond:(float)a0;
- (void)pause;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)resume;
- (void)frameSync:(id)a0;
- (id)initWithDisplay:(struct __Display { } *)a0 andQueue:(id)a1;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)setFrameNotificationBlock:(id /* block */)a0;

@end
