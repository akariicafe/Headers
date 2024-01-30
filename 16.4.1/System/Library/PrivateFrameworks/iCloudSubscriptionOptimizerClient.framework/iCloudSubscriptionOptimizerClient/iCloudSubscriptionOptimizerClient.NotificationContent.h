@class NSString;

@interface iCloudSubscriptionOptimizerClient.NotificationContent : ISONotificationContent {
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldCallMlDaemon;

@end
