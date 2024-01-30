@class CMContinuityCaptureState, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CMContinuityCaptureStateMachineActionDelegate;

@interface CMContinuityCaptureStateMachine : NSObject {
    NSMutableArray *_transactions;
    NSMutableArray *_previousStates;
    NSMutableDictionary *_events;
    NSMutableArray *_eventQueue;
    id<CMContinuityCaptureStateMachineActionDelegate> _actionDelegate;
}

@property (retain, nonatomic) CMContinuityCaptureState *currentState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *deferredEvents;

- (void)addEvents:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)aggregateEvents;
- (BOOL)stateMachineCaptureSessionGuard;
- (void)stateMachineRestartStream:(unsigned long long)a0 data:(id)a1;
- (void)stateMachineForceRestartStream:(unsigned long long)a0;
- (BOOL)stateMachineSidecarConnectGuard;
- (void)_enqueueEventWithNameToPost:(id)a0 data:(id)a1;
- (void)_notifyCompletion:(id)a0;
- (unsigned long long)actionTypeForEventName:(id)a0;
- (void)addStateTransitions:(id)a0;
- (void)enqueueDataEventWithNameToPost:(id)a0 data:(id)a1;
- (void)enqueueEventWithNameToPost:(id)a0;
- (void)enqueueEventWithNameToPostOnCurrentQueue:(id)a0;
- (id)eventForName:(id)a0;
- (id)getDeferredEventsToPostForState:(id)a0;
- (id)getNewStateAfterPostingDeferredEvents:(id)a0 deferredEventsToPost:(id *)a1;
- (id)initWithActionDelegate:(id)a0 queue:(id)a1;
- (void)notifyCompletion:(id)a0;
- (BOOL)postEventWithName:(id)a0 data:(id)a1;
- (BOOL)postSameStateAction:(id)a0 transition:(id)a1 event:(id)a2;
- (BOOL)postStateChangeAction:(id)a0 transition:(id)a1 event:(id)a2;
- (void)setupStateMachineForAgent;
- (void)setupStateMachineForExtension;
- (BOOL)stateMachineConnectionChangeGuard;
- (void)stateMachineDisableReconnect;
- (void)stateMachineEnterDisable:(unsigned long long)a0;
- (void)stateMachineEnterPause:(unsigned long long)a0;
- (void)stateMachineExitPause:(unsigned long long)a0;
- (void)stateMachineImageCapture;
- (BOOL)stateMachineImageCaptureGuard;
- (void)stateMachineNotifyCompletion:(id)a0;
- (void)stateMachinePause:(unsigned long long)a0;
- (BOOL)stateMachinePauseGuard;
- (void)stateMachineResume:(unsigned long long)a0;
- (void)stateMachineSidecarConnect:(unsigned long long)a0;
- (void)stateMachineSidecarDisconnect:(unsigned long long)a0;
- (void)stateMachineStartStream:(unsigned long long)a0;
- (void)stateMachineStopStream:(unsigned long long)a0;
- (void)stateMachineStreamDisable:(unsigned long long)a0;
- (void)stateMachineStreamEnable:(unsigned long long)a0;
- (BOOL)stateMachineStreamGuard;
- (void)stateMachineTerminate;
- (void)stateMachineUserDisconnect:(unsigned long long)a0;
- (void)stateMachineUserDisconnectPendingNotification:(unsigned long long)a0;
- (void)stateMachineUserReconnect:(unsigned long long)a0;

@end
