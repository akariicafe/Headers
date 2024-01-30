@class NSDate, NSString, NSCalendar, HDMedicationScheduleDailyAnalytics, HDMedicationUserDomainConceptDailyAnalytics, HDMedicationDoseEventDailyAnalytics, HDProfile, HDMedicationOntologyDailyAnalytics, NSUserDefaults;

@interface HDMedicationDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    NSUserDefaults *_medicationsUserDefaults;
    NSCalendar *_calendar;
    NSDate *_currentDate;
    HDMedicationDoseEventDailyAnalytics *_doseEventAnalytics;
    HDMedicationUserDomainConceptDailyAnalytics *_medicationConceptAnalytics;
    HDMedicationOntologyDailyAnalytics *_ontologyAnalytics;
    HDMedicationScheduleDailyAnalytics *_scheduleAnalytics;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)a0;
- (id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)a0;
- (id)_lifestyleInteractionsAnalyticsPayload;
- (id)_reminderAnalyticsPayload;

@end
