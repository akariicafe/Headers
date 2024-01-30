@class HKSPStateMachineState, NSString;
@protocol HKSPStateMachineInfoProvider, NAScheduler, HKSPStateMachineDelegate;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler>

@property (readonly, nonatomic) BOOL initialized;
@property (readonly, weak, nonatomic) id<HKSPStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HKSPStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HKSPStateMachineState *currentState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateMachineLog;
- (void)updateState;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (id)stateMachineName;
- (BOOL)enterState:(id)a0 context:(id)a1;
- (void)notifyDelegateWithBlock:(id /* block */)a0;
- (BOOL)enterState:(id)a0;
- (void)setInitialState:(id)a0;

@end
