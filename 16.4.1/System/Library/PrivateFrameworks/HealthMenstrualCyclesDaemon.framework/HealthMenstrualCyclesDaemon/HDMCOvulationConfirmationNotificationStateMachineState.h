@interface HDMCOvulationConfirmationNotificationStateMachineState : NSObject

+ (id)stateFromDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (long long)stateType;
- (id)hk_redactedDescription;
- (id)computeFiredStateWithCurrentDayIndex:(long long)a0;
- (id)computeNewStateFromAnalysis:(id)a0 currentDate:(id)a1 fertileWindowNotificationTimeOfDay:(id)a2 fertilityNotificationsEnabled:(BOOL)a3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a4;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)a0 fertileWindowEndDayIndex:(long long)a1 fireDayIndex:(long long)a2 daysShiftedForFertileWindow:(long long)a3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a4;
- (id)computeNewStateFromFertilityNotificationsEnabled:(BOOL)a0 isOvulationConfirmed:(BOOL)a1 correlatingPeriodStartDayIndex:(long long)a2 fertileWindowEndDayIndex:(long long)a3 fireDayIndex:(long long)a4 daysShiftedForFertileWindow:(long long)a5 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a6;
- (id)firedDayIndex;
- (id)scheduledNotificationDaysShiftedForFertileWindow;
- (id)scheduledNotificationDaysWithWristTemp45DaysBeforeOvulationConfirmed;
- (id)scheduledNotificationFertileWindowEndDayIndex;
- (id)scheduledNotificationFireDayIndex;

@end
