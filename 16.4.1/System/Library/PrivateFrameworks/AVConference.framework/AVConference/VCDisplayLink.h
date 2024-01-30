@class NSRunLoop, NSObject, CADisplayLink;
@protocol OS_dispatch_semaphore;

@interface VCDisplayLink : VCObject {
    CADisplayLink *_caDisplayLink;
    struct tagVCRealTimeThread { unsigned int x0; unsigned int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; id x3; void /* function */ *x4; void *x5; struct OpaqueFigThread *x6; int x7; char x8[60]; unsigned int x9; unsigned int x10; } *_thread;
    NSRunLoop *_runLoop;
    unsigned long long _state;
    NSObject<OS_dispatch_semaphore> *_waitToRunSemaphore;
    id /* block */ _handler;
}

- (void)deactivate;
- (void)displayLinkTick:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithHandler:(id /* block */)a0;
- (BOOL)activate;
- (BOOL)ensureDisplayIsReady;
- (void)handleWaitToRunTimeout;
- (id)initWithHandler:(id /* block */)a0 threadPriority:(unsigned int)a1 threadOptions:(unsigned int)a2 threadIdentifier:(id)a3;
- (void)runDisplayLinkThreadWithStopRequested:(BOOL *)a0;

@end
