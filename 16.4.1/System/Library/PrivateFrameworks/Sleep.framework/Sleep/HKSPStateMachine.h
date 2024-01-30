@class NSArray, HKSPStateMachineState, NSString;
@protocol HKSPStateMachineInfoProvider, NAScheduler, HKSPStateMachineDelegate;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler>

@property (readonly, nonatomic) BOOL initialized;
@property (readonly, nonatomic) NSArray *allStates;
@property (readonly, weak, nonatomic) id<HKSPStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HKSPStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HKSPStateMachineState *currentState;
@property (readonly, nonatomic) NSString *currentStateIdentifier;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)loggingCategory;
- (BOOL)enterState:(id)a0;
- (void)setInitialState:(id)a0;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (void)updateState;
- (void).cxx_destruct;
- (id)stateMachineName;
- (BOOL)enterState:(id)a0 context:(id)a1;
- (void)notifyDelegateWithBlock:(id /* block */)a0;
- (void)updateStateWithContext:(id)a0;

@end
