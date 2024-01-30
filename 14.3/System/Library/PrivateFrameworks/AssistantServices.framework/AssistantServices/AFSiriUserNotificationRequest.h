@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest> {
    UNNotification *_notification;
    NSString *_sourceAppId;
}

+ (BOOL)canBeHandled;
+ (BOOL)supportedOnPlatform;
+ (BOOL)supportedForApplicationWithBundleId:(id)a0;

- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1;

@end
