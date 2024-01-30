@class NSString, HDProfile, NSCalendar, NSDate;

@interface HDMedicationDoseEventDailyAnalytics : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

+ (id)_countOfDoseEventsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_doseEventCountLoggedSinceDate:(id)a0 transaction:(id)a1;
+ (id)_predicateForDoseEventsBetweenDate:(id)a0 andDate:(id)a1;
+ (id)_predicateForDoseEventsLoggedSinceDate:(id)a0;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_hasLoggedAllScheduledMedsInPreviousDayPayloadWithTransaction:(id)a0;
- (id)_hasLoggedMedsInPastPayloadWithTransaction:(id)a0;
- (id)_weeksSinceFirstLoggedMedPayload;
- (id)initWithProfile:(id)a0 calendar:(id)a1 currentDate:(id)a2;

@end
