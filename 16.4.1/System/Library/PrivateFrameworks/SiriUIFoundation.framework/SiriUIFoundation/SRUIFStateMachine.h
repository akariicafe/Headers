@class NSMutableDictionary;
@protocol SRUIFStateMachineDelegate;

@interface SRUIFStateMachine : NSObject

@property (nonatomic, setter=_setState:) long long state;
@property (retain, nonatomic, getter=_endStatesByEventByStartState) NSMutableDictionary *endStatesByEventByStartState;
@property (weak, nonatomic) id<SRUIFStateMachineDelegate> delegate;

- (id)initWithInitialState:(long long)a0;
- (void)performTransitionForEvent:(long long)a0;
- (void).cxx_destruct;
- (id)_descriptionForEvent:(long long)a0;
- (id)_endStateNumberFromDictionary:(id)a0 forEvent:(long long)a1;
- (void)addTransitionFromState:(long long)a0 toState:(long long)a1 forEvent:(long long)a2;
- (void)performTransitionForEvent:(long long)a0 eventTimeStamp:(double)a1;
- (void)_setState:(long long)a0 forEvent:(long long)a1 eventTimeStamp:(double)a2;

@end
