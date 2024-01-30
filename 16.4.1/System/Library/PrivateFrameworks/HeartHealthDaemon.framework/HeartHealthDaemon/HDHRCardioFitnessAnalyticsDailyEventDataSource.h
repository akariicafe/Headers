@class HDProfile;

@interface HDHRCardioFitnessAnalyticsDailyEventDataSource : NSObject <HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface> {
    HDProfile *_profile;
}

+ (id)localGregorianCalendar;

- (id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)a0;
- (id)initWithProfile:(id)a0;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)a0 isImproveHealthAndActivityAllowed:(BOOL)a1 error:(id *)a2;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)a0 isImproveHealthAndActivityAllowed:(BOOL)a1 error:(id *)a2;
- (id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)a0 error:(id *)a1;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)a0 error:(id *)a1;
- (id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)a0;
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)a0 isImproveHealthAndActivityAllowed:(BOOL)a1 error:(id *)a2;
- (BOOL)determineIsNotificationsEnabled;
- (long long)numberOfDaysBetweenStartDate:(id)a0 endDate:(id)a1;
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)a0 currentDate:(id)a1 error:(id *)a2;
- (id)latestClassificationWithIsOnboarded:(BOOL)a0 isImproveHealthAndActivityAllowed:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
