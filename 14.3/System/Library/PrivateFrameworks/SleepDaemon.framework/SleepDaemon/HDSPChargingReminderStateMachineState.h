@class HDSPChargingReminderStateMachine, NSString;

@interface HDSPChargingReminderStateMachineState : HKSPPersistentStateMachineState <HDSPChargingReminderStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPChargingReminderStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (id)determineNextState;
- (void)batteryMonitoringEventDue;
- (void)batteryLevelChanged:(float)a0;
- (BOOL)isChargingReminderDisabled;
- (BOOL)_inMonitoringWindow;

@end
