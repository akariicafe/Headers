@class NSString, NSDictionary, NSMutableDictionary, SUCoreDiag, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreFSM : NSString

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSDictionary *stateTable;
@property (retain, nonatomic) NSMutableDictionary *usageTable;
@property (nonatomic) unsigned long long untrackedOccurrences;
@property (readonly, nonatomic) NSString *startState;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *currentState;
@property (readonly, nonatomic) NSMutableDictionary *registeredActionTable;
@property (nonatomic) BOOL performingEvent;
@property (retain, nonatomic) NSString *pendingFollowupEvent;
@property (retain, nonatomic) id pendingFollowupInfo;
@property (readonly, retain, nonatomic) NSString *fsmName;
@property (readonly, retain, nonatomic) NSString *instanceName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *extendedStateQueue;
@property (readonly, nonatomic) SUCoreDiag *diag;

- (void).cxx_destruct;
- (void)postEvent:(id)a0;
- (void)postEvent:(id)a0 withInfo:(id)a1;
- (void)followupEvent:(id)a0;
- (id)initMachine:(id)a0 ofInstance:(id)a1 withTable:(id)a2 startingIn:(id)a3;
- (void)registerAction:(id)a0 ForEvent:(id)a1 inState:(id)a2 usingDelegate:(id)a3 withInfoClass:(Class)a4;
- (void)activateMachine;
- (void)postProtectedEvent:(id)a0;
- (void)postProtectedEvent:(id)a0 withInfo:(id)a1;
- (void)followupEvent:(id)a0 withInfo:(id)a1;
- (id)initMachine:(id)a0 ofInstance:(id)a1 withTable:(id)a2 startingIn:(id)a3 usingDelegate:(id)a4 registeringAllInfoClass:(Class)a5;
- (id)copyCurrentState;
- (id)_initMachine:(id)a0 ofInstance:(id)a1 withTable:(id)a2 startingIn:(id)a3 usingDelegate:(id)a4 registeringAllInfoClass:(Class)a5 registeringAndActivating:(BOOL)a6;
- (void)_registerAllActions:(id)a0 withInfoClass:(Class)a1 stateTable:(id)a2 actionTable:(id)a3 loggingRegistration:(BOOL)a4;
- (BOOL)_activateMachineWithStateTable:(id)a0 withActionTable:(id)a1;
- (id)_acceptEvent:(id)a0 withInfo:(id)a1 issueType:(id)a2 attachedAction:(id *)a3;
- (void)_performEvent:(id)a0 withInfo:(id)a1 issueType:(id)a2 forCell:(id)a3 attachedAction:(id)a4 checkingAttached:(BOOL)a5;
- (void)_registerAction:(id)a0 ForEvent:(id)a1 inState:(id)a2 usingDelegate:(id)a3 withInfoClass:(Class)a4 actionTable:(id)a5 loggingRegistration:(BOOL)a6;
- (void)_postEvent:(id)a0 withInfo:(id)a1;
- (void)_simulateEventAlteration:(id)a0 fsmEvent:(id *)a1 eventInfo:(id *)a2 attachedAction:(id *)a3;
- (void)_trackEventOccurrence:(id)a0 withInfo:(id)a1 issueType:(id)a2;
- (void)_triggerAction:(id)a0 usingAttached:(id)a1 onEvent:(id)a2 inState:(id)a3 withInfo:(id)a4 nextState:(id)a5;
- (id)initMachine:(id)a0 withTable:(id)a1 startingIn:(id)a2;
- (id)initMachine:(id)a0 withTable:(id)a1 startingIn:(id)a2 usingDelegate:(id)a3 registeringAllInfoClass:(Class)a4;
- (void)teardownMachine;
- (void)registerAllActions:(id)a0 withInfoClass:(Class)a1;
- (id)copyCurrentStateProtected;
- (void)dumpEventInStateOccurrences:(id)a0;

@end
