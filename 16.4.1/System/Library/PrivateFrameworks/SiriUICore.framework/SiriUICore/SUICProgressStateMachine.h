@class CUStateMachine, NSPointerArray, NSDictionary, CUState;

@interface SUICProgressStateMachine : NSObject {
    CUStateMachine *_underlyingStateMachine;
    NSDictionary *_stateForStateName;
    unsigned long long _currentState;
    CUState *_abstractState;
}

@property (retain, nonatomic, getter=_stateMachineObservers, setter=_setStateMachineObservers:) NSPointerArray *stateMachineObservers;
@property (readonly) unsigned long long state;

- (void)addObserver:(id)a0;
- (void)handleEvent:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (void)setObservers:(id)a0;
- (void).cxx_destruct;
- (void)_ignoreEvent:(unsigned long long)a0;
- (void)_transitionToState:(unsigned long long)a0 forEvent:(unsigned long long)a1;
- (void)addObservers:(id)a0;

@end
