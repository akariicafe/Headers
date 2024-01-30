@interface SleepHealthAppPlugin.SleepScheduleProvider : NSObject <HKSPSleepStoreObserver> {
    void /* unknown type, empty encoding */ currentSchedulePublisher;
    void /* unknown type, empty encoding */ currentGoalPublisher;
    void /* unknown type, empty encoding */ currentWindDownDurationPublisher;
    void /* unknown type, empty encoding */ currentScheduleEnabledPublisher;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ query;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;

@end
