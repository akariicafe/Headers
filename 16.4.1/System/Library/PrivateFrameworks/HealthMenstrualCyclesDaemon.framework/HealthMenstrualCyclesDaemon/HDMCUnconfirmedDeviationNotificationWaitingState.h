@interface HDMCUnconfirmedDeviationNotificationWaitingState : HDMCUnconfirmedDeviationNotificationStateMachineState

+ (id)notificationStateFromDictionaryRepresentation:(id)a0;

- (long long)stateType;
- (id)computeNewStateFromMaxEnd:(long long)a0 dismissalDayIndex:(id)a1 scheduledFireDayIndex:(long long)a2;
- (id)scheduledNotificationFireDayIndex;

@end
