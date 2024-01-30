@interface _UIStateMachine : NSObject {
    const struct { struct _UIStateMachineMeta { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct _UIStateMachineDebugging *x1; struct { id /* block */ x0; struct _UIStateTransition { id /* block */ x0; id /* block */ x1; unsigned short x2 : 16; unsigned char x3 : 8; unsigned char x4 : 8; } x1[0]; } x2[0]; } *_spec;
    BOOL _externalSpec;
}

@property (readonly, nonatomic) void *spec;
@property (readonly, nonatomic) unsigned long long state;

- (void)handleEvent:(unsigned long long)a0 withContext:(union _UIStateContext { id x0; void *x1; void *x2; })a1;
- (void)dealloc;
- (id)initWithSpec:(void *)a0 initialState:(unsigned long long)a1;
- (id)initWithStates:(unsigned long long)a0 events:(unsigned long long)a1 initialState:(unsigned long long)a2;
- (void)setStateChangeObserver:(unsigned long long)a0 observer:(id /* block */)a1;
- (void)setStaticTransitionFromState:(unsigned long long)a0 withEvent:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)setTransitionHandlerForState:(unsigned long long)a0 withEvent:(unsigned long long)a1 transitionHandler:(id /* block */)a2;
- (void)setTransitionHandlerForState:(unsigned long long)a0 withEvent:(unsigned long long)a1 transitionHandler:(id /* block */)a2 postTransitionHandler:(id /* block */)a3;

@end
