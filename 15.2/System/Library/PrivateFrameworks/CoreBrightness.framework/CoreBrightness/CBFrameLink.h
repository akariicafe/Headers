@class CADisplayLink, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBFrameLink : NSObject {
    NSObject<OS_os_log> *_logHandle;
    struct __Display { } *_display;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _fadeCallbackBlock;
    CADisplayLink *_displayLink;
}

- (BOOL)isPaused;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)setPreferredFramesPerSecond:(float)a0;
- (void)frameSync:(id)a0;
- (id)initWithDisplay:(struct __Display { } *)a0 andQueue:(id)a1;

@end
