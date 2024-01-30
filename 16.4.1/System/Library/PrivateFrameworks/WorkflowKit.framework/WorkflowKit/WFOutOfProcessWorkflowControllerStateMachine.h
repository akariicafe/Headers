@class NSObject;
@protocol OS_dispatch_queue, WFOutOfProcessWorkflowControllerStateMachineDelegate;

@interface WFOutOfProcessWorkflowControllerStateMachine : WFStateMachine

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<WFOutOfProcessWorkflowControllerStateMachineDelegate> delegate;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)exitWithReason:(id)a0;
- (void)startRunningShortcutWithReason:(id)a0;
- (BOOL)blocksTransitionsOnInvalidation;
- (void)finishRunningWithReason:(id)a0 result:(id)a1;
- (void)acquiringRunnerWithReason:(id)a0;
- (void)handleRunnerWillExit;
- (void)handleXPCErrorWithDescription:(id)a0 currentDialogAttribution:(id)a1;
- (void)handlingRequestWithReason:(id)a0;
- (void)idleStateWithReason:(id)a0;
- (BOOL)isFinishingShortcut;
- (BOOL)isRunningShortcut;
- (void)notifyDelegateWithReason:(id)a0 result:(id)a1 currentDialogAttribution:(id)a2;
- (void)pauseAndWriteShortcutToDiskState;
- (void)stopShortcutWithError:(id)a0 reason:(id)a1;
- (void)tearDownRunnerWithReason:(id)a0;

@end
