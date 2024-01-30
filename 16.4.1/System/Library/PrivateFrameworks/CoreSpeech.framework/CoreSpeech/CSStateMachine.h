@class NSMutableDictionary;
@protocol CSStateMachineDelegate;

@interface CSStateMachine : NSObject

@property (nonatomic) long long initialState;
@property (retain, nonatomic) NSMutableDictionary *transitions;
@property (retain, nonatomic) NSMutableDictionary *eventToStateTransitions;
@property (weak, nonatomic) id<CSStateMachineDelegate> delegate;
@property (readonly, nonatomic) long long currentState;

- (void)addTransitionFromAnyStateTo:(long long)a0 for:(long long)a1;
- (id)initWithInitialState:(long long)a0;
- (void)addTransitionFrom:(long long)a0 to:(long long)a1 for:(long long)a2;
- (void)performTransitionForEvent:(long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
