@interface MedicationsHealthAppPlugin.MedicationScheduleObserver : NSObject <HKMedicationScheduleControlObserver> {
    void /* unknown type, empty encoding */ scheduleControl;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ dateInterval;
    void /* unknown type, empty encoding */ scheduleItemDataSource;
    void /* unknown type, empty encoding */ scheduleItemObserverTask;
    void /* unknown type, empty encoding */ _scheduleItems;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleControlDidRescheduleItems;

@end
