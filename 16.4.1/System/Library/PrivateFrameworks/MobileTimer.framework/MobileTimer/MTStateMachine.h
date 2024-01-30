@class NSString, MTStateMachineState;
@protocol MTStateMachineInfoProvider, MTStateMachineDelegate;

@interface MTStateMachine : NSObject <MTStateMachineEventHandler>

@property (retain, nonatomic) MTStateMachineState *currentState;
@property (weak, nonatomic) id<MTStateMachineDelegate> delegate;
@property (weak, nonatomic) id<MTStateMachineInfoProvider> infoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterState:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (void).cxx_destruct;
- (id)stateMachineLog;
- (id)stateMachineName;

@end
