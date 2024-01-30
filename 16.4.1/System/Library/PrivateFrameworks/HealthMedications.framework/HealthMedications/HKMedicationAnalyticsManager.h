@class HKHealthStore, NSCalendar;

@interface HKMedicationAnalyticsManager : HKAnalyticsEventSubmissionManager {
    long long _provenance;
    HKHealthStore *_healthStore;
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 provenance:(long long)a1;
- (void)asynchronouslySubmitRoomInteraction:(long long)a0 roomType:(long long)a1;

@end
