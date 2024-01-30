@class NSCalendar, HDProfile, NSDateInterval, HDHeartDailyAnalytics, NSUserDefaults;

@interface HDHeartDailyAnalyticsBuilder : NSObject {
    HDProfile *_profile;
    HDHeartDailyAnalytics *_heartDailyAnalytics;
    NSUserDefaults *_heartRateNotificationsUserDefaults;
    NSUserDefaults *_heartRhythmUserDefaults;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
    BOOL _isHealthDataSubmissionAllowed;
    NSCalendar *_calendar;
    NSDateInterval *_dateInterval;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 calendar:(id)a1 dateInterval:(id)a2 heartRateNotificationsUserDefaults:(id)a3 heartRhythmUserDefaults:(id)a4 remoteFeatureAvailabilityUserDefaults:(id)a5 isHealthDataSubmissionAllowed:(BOOL)a6;
- (id)heartDailyAnalyticsWithError:(id *)a0;

@end
