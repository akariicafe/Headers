@class NSString;

@interface CALNCalAnalyticsHandler : NSObject <CALNAnalyticsHandler>

@property (class, readonly, nonatomic) CALNCalAnalyticsHandler *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordNotificationResponse:(id)a0;
- (void)recordPostedNotification:(id)a0;

@end
