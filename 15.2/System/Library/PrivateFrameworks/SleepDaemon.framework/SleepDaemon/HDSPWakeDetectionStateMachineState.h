@class NSString, HDSPWakeDetectionStateMachine;

@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState <HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL schedulesWakeDetection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)earlyWakeUpWasNotifiedRemotely;
- (void)updateState;
- (void)wakeupEventDetected:(id)a0;
- (id)determineNextState;
- (void)wakeDetectionEventDue;
- (BOOL)isWakeDetectionDisabled;

@end
