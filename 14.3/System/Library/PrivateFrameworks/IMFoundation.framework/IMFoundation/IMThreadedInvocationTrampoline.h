@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {
    NSThread *_thread;
    BOOL _immediateForMatchingThread;
}

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 thread:(id)a1 immediateForMatchingThread:(BOOL)a2;

@end
