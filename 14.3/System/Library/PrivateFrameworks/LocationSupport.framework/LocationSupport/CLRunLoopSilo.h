@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    double _currentLatchedAbsoluteTimestamp;
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (void)assertInside;
- (void)sync:(id /* block */)a0;
- (id)runloop;
- (id)newTimer;
- (void)async:(id /* block */)a0;
- (void)assertOutside;
- (void).cxx_destruct;
- (id)getTimeCoercibleVariantInstance;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isSuspended;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (BOOL)inPermissiveMode;
- (double)currentLatchedAbsoluteTimestamp;
- (void)resume;
- (void)updateLatchedAbsoluteTimestamp;
- (id)debugDescription;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (void)suspend;

@end
