@class NSString;

@interface FigStateMachine : NSObject {
    id _owner;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _currentState;
    struct FigStateMachineStateConfiguration { BOOL x0; id x1; id x2; id x3; } *_stateConfigurations;
    char _stateCount;
    NSString *_label;
}

@property (nonatomic) BOOL performsAtomicStateTransitions;
@property (readonly) unsigned int currentState;
@property (readonly) NSString *label;
@property (readonly) NSString *currentStateLabel;

+ (void)initialize;

- (BOOL)transitionToState:(unsigned int)a0;
- (void)whenTransitioningToStates:(unsigned int)a0 callHandler:(id /* block */)a1;
- (id)initWithLabel:(id)a0 stateCount:(char)a1 initialState:(unsigned int)a2 owner:(id)a3;
- (BOOL)transitionToState:(unsigned int)a0 fromState:(unsigned int)a1;
- (void)whenTransitioningToStateFails:(unsigned int)a0 callHandler:(id /* block */)a1;
- (void)setLabel:(id)a0 forState:(unsigned int)a1;
- (id)description;
- (BOOL)transitionToState:(unsigned int)a0 errorStatus:(int)a1;
- (void)whenTransitioningToState:(unsigned int)a0 callHandler:(id /* block */)a1;
- (void)whenTransitioningToStatesFail:(unsigned int)a0 callHandler:(id /* block */)a1;
- (id)labelForState:(unsigned int)a0;
- (BOOL)transitionToState:(unsigned int)a0 fromStates:(unsigned int)a1;
- (void)whenTransitioningFromState:(unsigned int)a0 toState:(unsigned int)a1 callHandler:(id /* block */)a2;
- (void)markStateAsTerminal:(unsigned int)a0;
- (void)dealloc;

@end
