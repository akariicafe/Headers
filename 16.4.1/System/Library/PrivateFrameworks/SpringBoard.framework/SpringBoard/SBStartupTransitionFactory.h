@class SBInitialRestartState;

@interface SBStartupTransitionFactory : NSObject {
    SBInitialRestartState *_initialRestartState;
}

- (id)initWithInitialRestartState:(id)a0;
- (void).cxx_destruct;
- (id)_transactionForDestination:(unsigned long long)a0 context:(id)a1;
- (id)transitionForContext:(id)a0 outDestination:(unsigned long long *)a1;

@end
