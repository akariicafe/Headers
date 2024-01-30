@class HDKeyValueDomain, HDPrimaryProfile, HKCalendarCache;

@interface HDMCOvulationConfirmationStateManager : NSObject {
    HDPrimaryProfile *_profile;
    HDKeyValueDomain *_keyValueDomain;
    HKCalendarCache *_calendarCache;
}

- (id)initWithProfile:(id)a0;
- (id)scheduledNotificationDaysShiftedFromCalendarMethodWithEvent:(id)a0 error:(id *)a1;
- (BOOL)clearStateIfNecessaryFromSettingsManager:(id)a0 error:(id *)a1;
- (BOOL)transitionToFiredNotificationStateWithRequest:(id)a0 settingsManager:(id)a1 error:(id *)a2;
- (id)scheduledNotificationFertileWindowEndDayIndexWithEvent:(id)a0 error:(id *)a1;
- (id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct { long long x0; long long x1; })a0 calendarCache:(id)a1 error:(id *)a2;
- (id)eventsToScheduleForAnalysis:(id)a0 settingsManager:(id)a1 scheduler:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
