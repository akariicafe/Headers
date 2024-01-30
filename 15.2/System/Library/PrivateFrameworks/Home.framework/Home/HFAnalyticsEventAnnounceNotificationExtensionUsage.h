@class NSNumber;

@interface HFAnalyticsEventAnnounceNotificationExtensionUsage : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *notificationUsageDuration;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
