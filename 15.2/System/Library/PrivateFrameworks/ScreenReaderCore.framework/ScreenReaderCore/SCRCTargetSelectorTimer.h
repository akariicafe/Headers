@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    BOOL _isCanceled;
    BOOL _isPending;
    id _object;
    NSLock *_lock;
    BOOL _createdTimer;
    id /* block */ _block;
}

+ (void)initialize;
+ (void)_runThread;
+ (void)_assignThreadPriority;

- (BOOL)isPending;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (BOOL)_createdTimer;
- (BOOL)isCancelled;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)invalidate;
- (void)dealloc;
- (void)cancel;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 threadKey:(id)a2;
- (void)dispatchAfterDelay:(double)a0 withObject:(id)a1;
- (void)dispatchAfterDelay:(double)a0;
- (id)_initWithTarget:(id)a0 selector:(SEL)a1 threadKeyOrThread:(id)a2;
- (void)_dispatchThreadHelper:(id /* block */)a0;
- (void)_runTimerBlock:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 thread:(id)a2;
- (void)dispatchAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (id)threadKey;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;

@end
