@class SBInitialRestartState;

@interface SBStartupTransitionFactory : NSObject {
    SBInitialRestartState *_initialRestartState;
}

- (void).cxx_destruct;
- (id)initWithInitialRestartState:(id)a0;
- (id)transitionForContext:(id)a0 outDestination:(unsigned long long *)a1;
- (id)_transactionForDestination:(unsigned long long)a0 context:(id)a1;

@end
