@class NSString, HKHealthStore, NSCalendar;

@interface HKMedicationRoomInteractionEvent : NSObject <HKAnalyticsEvent> {
    HKHealthStore *_healthStore;
    NSCalendar *_calendar;
    long long _action;
    long long _roomType;
    long long _provenance;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)a0;
- (id)_statisticsAnalyticsPayloadWithDataSource:(id)a0;
- (id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)a0;
- (id)initWithHealthStore:(id)a0 calendar:(id)a1 medicationRoomAction:(long long)a2 roomType:(long long)a3 provenance:(long long)a4;

@end
