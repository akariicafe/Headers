@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (BOOL)isSuspended;
- (id)runloop;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (BOOL)inPermissiveMode;
- (id)getTimeCoercibleVariantInstance;
- (id)newTimer;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (void)assertOutside;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (void)assertInside;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)debugDescription;
- (void)async:(id /* block */)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)sync:(id /* block */)a0;
- (void)heartBeat:(id)a0;
- (void).cxx_destruct;
- (void)resume;

@end
