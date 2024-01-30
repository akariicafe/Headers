@interface DelayedInvocationTrampoline : InvocationTrampoline {
    double _delay;
}

- (id)initWithTarget:(id)a0 delay:(double)a1;
- (void)forwardInvocation:(id)a0;

@end
