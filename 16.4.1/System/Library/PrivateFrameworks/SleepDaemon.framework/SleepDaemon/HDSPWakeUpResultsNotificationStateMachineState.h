@class NSString, HDSPWakeUpResultsNotificationStateMachine;
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider;

@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queryDidComplete;
- (void)wakeUpDidOccur;
- (void)retryAttemptEventDue;
- (void)didPostResultsNotification;
- (void)stateDidExpireWithContext:(id)a0;
- (id)nextStateWithContext:(id *)a0;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidFailWithError:(id)a0;

@end
