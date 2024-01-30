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

- (void)addState:(id)a0;
- (id)stateWithName:(id)a0;
- (id)initWithTarget:(id)a0;
- (void)dealloc;
- (void)delegateWillExitState:(id)a0 event:(id)a1;
- (id)init;
- (void)transitionWithTriggeringEvent:(id)a0;
- (void)start;
- (id)addStateWithName:(id)a0;
- (void)invokeAction:(SEL)a0 event:(id)a1;
- (id)description;
- (id)eventForTriggeringEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)canTransitionWithTriggeringEvent:(id)a0;
- (void)delegateDidEnterState:(id)a0 event:(id)a1;

@end
