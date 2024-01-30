@class NSArray;

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {
    NSArray *_modes;
    double _delay;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 delay:(double)a1 modes:(id)a2;

@end
