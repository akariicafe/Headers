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

- (unsigned long long)loggingCategory;
- (void)updateState;
- (void)setInitialState:(id)a0;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (BOOL)enterState:(id)a0;
- (void).cxx_destruct;
- (id)stateMachineName;
- (BOOL)enterState:(id)a0 context:(id)a1;
- (void)notifyDelegateWithBlock:(id /* block */)a0;

@end
