@class NSString, HDProfile, NSDate;

@interface HDMobilityWalkingSteadinessAnalyticsNotificationEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationEventDataSourceProvider> {
    HDProfile *_profile;
    NSString *_category;
    long long _value;
    NSDate *_date;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)biologicalSexWithError:(id *)a0;
- (void).cxx_destruct;
- (id)ageWithError:(id *)a0;
- (id)areHealthNotificationsAuthorizedWithError:(id *)a0;
- (id)daysSinceLastNotificationWithError:(id *)a0;
- (id)notificationClassificationWithError:(id *)a0;
- (id)notificationTypeWithError:(id *)a0;
- (id)initWithProfile:(id)a0 category:(id)a1 value:(long long)a2 date:(id)a3;

@end
