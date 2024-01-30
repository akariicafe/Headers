@interface _TtC13SleepHealthUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0621SleepScheduleProvider : NSObject <HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ currentSchedulePublisher;
    void /* unknown type, empty encoding */ currentGoalPublisher;
    void /* unknown type, empty encoding */ eventRecordPublisher;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ query;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;

@end
