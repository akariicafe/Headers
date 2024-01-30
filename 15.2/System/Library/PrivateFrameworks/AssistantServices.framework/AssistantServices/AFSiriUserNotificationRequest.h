@class NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest> {
    UNNotification *_notification;
    NSString *_sourceAppId;
    long long _platform;
}

+ (BOOL)supportedOnPlatform;
+ (BOOL)supportedForApplicationWithBundleId:(id)a0;
+ (BOOL)canBeHandled;

- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1;
- (void)deactivateRequestForReason:(long long)a0 completion:(id /* block */)a1;
- (void)withdrawalRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithUserNotification:(id)a0 sourceAppId:(id)a1 platform:(long long)a2;

@end
