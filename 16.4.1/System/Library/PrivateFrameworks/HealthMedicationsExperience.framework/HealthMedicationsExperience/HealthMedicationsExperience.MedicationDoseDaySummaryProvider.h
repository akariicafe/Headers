@class NSString;

@interface HealthMedicationsExperience.MedicationDoseDaySummaryProvider : NSObject <HKMedicationScheduleControlObserver> {
    void /* unknown type, empty encoding */ _daySummary;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ scheduleControl;
    void /* unknown type, empty encoding */ medicationDetailProvider;
    void /* unknown type, empty encoding */ observerQuery;
    void /* unknown type, empty encoding */ doseEventPredicate;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void)scheduleControlDidRescheduleItems;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
