@class NFMutexLock, NSMutableDictionary, NFStateMachineState;

@interface NFStateMachine : NSObject

@property (weak, nonatomic) id owner;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NFStateMachineState *state;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NFMutexLock *lock;
@property (nonatomic) long long statusToken;

- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (void)deactivateIfNeeded;
- (id)fireEventWithName:(id)a0 withContext:(id)a1;
- (void)addState:(id)a0;
- (id)description;
- (void)activateIfNeeded;
- (void)activate;
- (id)initWithState:(id)a0 withOwner:(id)a1;
- (id)debugDescription;
- (void)deactivate;

@end
