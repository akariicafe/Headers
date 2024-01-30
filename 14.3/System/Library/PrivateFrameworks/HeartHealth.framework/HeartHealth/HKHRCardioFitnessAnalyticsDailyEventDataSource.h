@class HDProfile;

@interface HKHRCardioFitnessAnalyticsDailyEventDataSource : NSObject {
    HDProfile *_profile;
    BOOL _isImproveHealthAndActivityAllowed;
}

+ (id)localGregorianCalendar;

- (void).cxx_destruct;
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)a0 currentDate:(id)a1 error:(id *)a2;
- (long long)numberOfDaysBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)initWithProfile:(id)a0 isImproveHealthAndActivityAllowed:(BOOL)a1;
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)a0 error:(id *)a1;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)a0 error:(id *)a1;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)a0 error:(id *)a1;
- (id)determineIsBlockersEnabledWithError:(id *)a0;
- (id)determineIsHeartRateEnabled;
- (id)determineIsWristDetectionEnabled;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)a0 error:(id *)a1;
- (BOOL)determineIsNotificationsEnabled;

@end
