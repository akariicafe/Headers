@interface FAPushNotificationHandler : NSObject

+ (id)sharedHandler;

- (void)didReceivePushNotificationWithPayload:(id)a0;

@end
