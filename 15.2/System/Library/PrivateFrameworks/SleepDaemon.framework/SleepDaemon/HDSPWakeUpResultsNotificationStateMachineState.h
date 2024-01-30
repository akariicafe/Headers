@class NSString, HDSPWakeUpResultsNotificationStateMachine;
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider;

@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (readonly, nonatomic, getter=isStateExpired) BOOL stateExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didPostResultsNotification;
- (void)updateState;
- (void)retryAttemptEventDue;
- (void)trackingDelayEventDue;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidFailWithError:(id)a0;
- (void)wakeUpDidOccur;
- (void)queryDidComplete;

@end
