@interface FitnessCoachingServices.SleepObserver : NSObject <FISleepDataProviderDelegate> {
    void /* unknown type, empty encoding */ dateProvider;
    void /* unknown type, empty encoding */ duetObserver;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ state;
}

- (id)currentDate;
- (void)sleepDataProviderUserDayDidUpdate;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (id)currentCalendar;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
