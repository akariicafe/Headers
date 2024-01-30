@class NSString, HDSPWakeDetectionStateMachine;

@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState <HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL schedulesWakeDetection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (id)determineNextState;
- (BOOL)isWakeDetectionDisabled;
- (void)wakeDetectionEventDue;
- (void)wakeupEventDetected:(id)a0;
- (void)earlyWakeUpWasNotifiedRemotely;

@end
