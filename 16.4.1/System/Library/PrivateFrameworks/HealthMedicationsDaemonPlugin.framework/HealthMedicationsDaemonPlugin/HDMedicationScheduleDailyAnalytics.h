@class NSString, HDProfile;

@interface HDMedicationScheduleDailyAnalytics : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

+ (id)_medicationCountForSchedulesWithProfile:(id)a0 error:(id *)a1;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_makeMedicationCountPayloadForSchedulesWithProfile:(id)a0;

@end
