@interface DelayedInvocationTrampoline : InvocationTrampoline {
    double _delay;
}

- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 delay:(double)a1;

@end
