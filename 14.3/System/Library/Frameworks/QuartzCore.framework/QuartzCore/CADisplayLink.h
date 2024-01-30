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
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long frameInterval;
@property (nonatomic) long long preferredFramesPerSecond;

+ (id)displayLinkWithDisplay:(id)a0 target:(id)a1 selector:(SEL)a2;
+ (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;

- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void)dealloc;
- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem { struct Display *x0; void *x1; SEL x2; void *x3; long long x4; int x5; int x6; struct Mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x7; struct Condition { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x8; struct _opaque_pthread_t *x9; id x10; struct Ref<CA::Display::DisplayLink> { struct DisplayLink *x0; } x11; struct List<const __CFString *> *x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; struct Atomic { struct { int x0; } x0; } x18; unsigned char x19 : 1; unsigned char x20 : 1; } *)a0;
- (long long)actualFramesPerSecond;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)invalidate;

@end
