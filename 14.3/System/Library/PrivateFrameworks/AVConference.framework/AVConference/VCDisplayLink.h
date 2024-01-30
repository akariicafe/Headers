@class NSRunLoop, NSObject, CADisplayLink;
@protocol OS_dispatch_semaphore;

@interface VCDisplayLink : VCObject {
    CADisplayLink *_caDisplayLink;
    struct tagVCRealTimeThread { unsigned int x0; unsigned int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; id x3; void /* function */ *x4; void *x5; struct OpaqueFigThread *x6; int x7; char x8[60]; unsigned int x9; unsigned int x10; } *_thread;
    NSRunLoop *_runLoop;
    unsigned long long _state;
    NSObject<OS_dispatch_semaphore> *_waitToRunSemaphore;
}

- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)deactivate;
- (BOOL)ensureDisplayIsReady;
- (void)handleWaitToRunTimeout;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 threadPriority:(unsigned int)a2 threadOptions:(unsigned int)a3 threadIdentifier:(id)a4;
- (void)runDisplayLinkThreadWithStopRequested:(BOOL *)a0;

@end
