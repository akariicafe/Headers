@class NSString, HDProfile, NSCalendar, NSDate, NSUserDefaults;

@interface HDMedicationUserDomainConceptDailyAnalytics : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    NSUserDefaults *_medicationsUserDefaults;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

+ (id)_countOfUserDomainConceptsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_medicationsAddedCountSinceDate:(id)a0 transaction:(id)a1;
+ (id)_predicateForMedicationsSinceDate:(id)a0;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_hasAddedMedsInPastIHAGatedPayloadWithTransaction:(id)a0;
- (id)_hasAddedMedsInPastUnrestrictedPayloadWithTransaction:(id)a0;
- (id)_hasAnyLifestyleFactorEnabledPayload;
- (id)_hasMedsListPayloadWithTransaction:(id)a0;
- (id)_medsCountPayloadWithTransaction:(id)a0;
- (id)_medsInteractionsPayloadWithTransaction:(id)a0;
- (id)_weeksSinceFirstAddedMedPayloadWithTransaction:(id)a0;
- (id)initWithProfile:(id)a0 medicationsUserDefaults:(id)a1 calendar:(id)a2 currentDate:(id)a3;

@end
