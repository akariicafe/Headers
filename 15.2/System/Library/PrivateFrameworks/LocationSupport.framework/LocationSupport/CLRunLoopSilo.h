@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (id)newTimer;
- (id)runloop;
- (void)sync:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isSuspended;
- (id)getTimeCoercibleVariantInstance;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)async:(id /* block */)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (void)assertInside;
- (void).cxx_destruct;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (void)heartBeat:(id)a0;
- (BOOL)inPermissiveMode;
- (void)suspend;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)resume;
- (id)debugDescription;
- (void)assertOutside;

@end
