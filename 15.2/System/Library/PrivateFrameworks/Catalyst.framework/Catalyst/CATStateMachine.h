@class CATState, NSString, NSMutableDictionary;

@interface CATStateMachine : NSObject {
    NSMutableDictionary *mStateByName;
    NSString *mCalloutReason;
}

@property (retain, nonatomic) CATState *currentState;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) CATState *initialState;
@property (readonly, weak, nonatomic) id target;
@property (nonatomic) unsigned long long logLevel;

+ (id)new;

- (id)addStateWithName:(id)a0;
- (void)transitionWithTriggeringEvent:(id)a0;
- (BOOL)canTransitionWithTriggeringEvent:(id)a0;
- (id)stateWithName:(id)a0;
- (id)description;
- (void)start;
- (void)delegateWillExitState:(id)a0 event:(id)a1;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invokeAction:(SEL)a0 event:(id)a1;
- (void)addState:(id)a0;
- (void)delegateDidEnterState:(id)a0 event:(id)a1;
- (void)dealloc;
- (id)eventForTriggeringEvent:(id)a0;

@end
