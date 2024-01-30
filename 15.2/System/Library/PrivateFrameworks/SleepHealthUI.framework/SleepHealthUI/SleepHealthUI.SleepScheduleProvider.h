@interface SleepHealthUI.SleepScheduleProvider : NSObject <HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ currentSchedulePublisher;
    void /* unknown type, empty encoding */ currentGoalPublisher;
    void /* unknown type, empty encoding */ eventRecordPublisher;
    void /* unknown type, empty encoding */ query;
}

- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
