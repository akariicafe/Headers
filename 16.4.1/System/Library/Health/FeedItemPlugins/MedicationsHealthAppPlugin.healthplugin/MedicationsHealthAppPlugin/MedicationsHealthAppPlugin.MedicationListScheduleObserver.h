@interface MedicationsHealthAppPlugin.MedicationListScheduleObserver : NSObject <HKMedicationScheduleControlObserver> {
    void /* unknown type, empty encoding */ scheduleChangedSubject;
}

- (id)init;
- (void).cxx_destruct;
- (void)scheduleControlDidRescheduleItems;

@end
