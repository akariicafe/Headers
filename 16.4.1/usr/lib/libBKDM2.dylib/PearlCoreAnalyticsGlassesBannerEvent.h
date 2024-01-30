@class NSNumber;

@interface PearlCoreAnalyticsGlassesBannerEvent : PearlCoreAnalyticsEvent

@property (retain) NSNumber *displayNotificationCount;
@property (retain) NSNumber *enrollmentAfterBannerCount;

- (id)initWithEnrollment;
- (id)initWithNotification;
- (void).cxx_destruct;

@end
