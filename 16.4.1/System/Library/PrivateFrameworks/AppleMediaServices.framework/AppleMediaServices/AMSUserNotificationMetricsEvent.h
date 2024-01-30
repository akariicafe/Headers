@class NSString;

@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *displayScheduledTime;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL postedSuccessfully;

+ (id)_propertyValueClassesForKnownProperties;
+ (id)_centerForBundleId:(id)a0;
+ (id)_stringFromInteruptionLevel:(unsigned long long)a0;
+ (id)eventForBadgingForMetricsDictionary:(id)a0 bundleID:(id)a1;
+ (id)eventForContentEngagementWithNotification:(id)a0;
+ (id)eventForPostedNotification:(id)a0;
+ (id)eventForSettingsChangedWithSettings:(id)a0 bundleID:(id)a1;
+ (id)eventForSettingsChangedWithSettings:(id)a0 bundleID:(id)a1 account:(id)a2;
+ (id)eventForVideoPlaybackForNotification:(id)a0;
+ (id)eventFromMetricsDictionary:(id)a0 centerBundleId:(id)a1;
+ (id)eventFromNotificationCenterSettings:(id)a0 centerBundleId:(id)a1;

- (id)_stringFromNotificationSetting:(long long)a0;
- (id)_createDisplayCriteriaFromSettings:(id)a0;
- (id)initWithTopic:(id)a0 settings:(id)a1 notificationSettingsForTopic:(id)a2 centerBundleId:(id)a3;

@end
