@interface HDMCOvulationConfirmationNotificationFiredState : HDMCOvulationConfirmationNotificationStateMachineState

@property (readonly, nonatomic) long long fireDayIndex;
@property (readonly, nonatomic) long long fertileWindowEndDayIndex;
@property (readonly, nonatomic) long long daysWithWristTemp45DaysBeforeOvulationConfirmed;
@property (readonly, nonatomic) long long daysShiftedForFertileWindow;

+ (id)notificationStateFromDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (long long)stateType;
- (id)description;
- (id)computeNewStateFromCorrelatingPeriodStartDayIndex:(long long)a0 fertileWindowEndDayIndex:(long long)a1 fireDayIndex:(long long)a2 daysShiftedForFertileWindow:(long long)a3 daysWithWristTemp45DaysBeforeOvulationConfirmed:(long long)a4;
- (id)firedDayIndex;
- (id)initWithFireDayIndex:(long long)a0;

@end
