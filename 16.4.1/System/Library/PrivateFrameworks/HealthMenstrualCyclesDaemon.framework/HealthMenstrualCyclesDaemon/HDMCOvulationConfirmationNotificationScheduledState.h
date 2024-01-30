@interface HDMCOvulationConfirmationNotificationScheduledState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, nonatomic) long long fertileWindowEndDayIndex;
@property (readonly, nonatomic) long long fireDayIndex;
@property (readonly, nonatomic) long long correlatingPeriodStartDayIndex;
@property (readonly, nonatomic) long long daysWithWristTemp45DaysBeforeOvulationConfirmed;
@property (readonly, nonatomic) long long daysShiftedForFertileWindow;

+ (id)notificationStateFromDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (long long)stateType;
- (id)description;
- (id)computeFiredStateWithCurrentDayIndex:(long long)a0;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)a0 fertileWindowEndDayIndex:(long long)a1 fireDayIndex:(long long)a2 daysShiftedForFertileWindow:(long long)a3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a4;
- (id)initWithFertileWindowEndDayIndex:(long long)a0 fireDayIndex:(long long)a1 correlatingPeriodStartDayIndex:(long long)a2 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a3 daysShiftedForFertileWindow:(long long)a4;
- (id)scheduledNotificationDaysShiftedForFertileWindow;
- (id)scheduledNotificationDaysWithWristTemp45DaysBeforeOvulationConfirmed;
- (id)scheduledNotificationFertileWindowEndDayIndex;
- (id)scheduledNotificationFireDayIndex;

@end
