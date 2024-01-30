@class HDCodableCompanionUserNotificationRequest;

@interface HDRemoteCompanionUserNotificationRequestContext : NSObject {
    HDCodableCompanionUserNotificationRequest *_request;
    id /* block */ _completion;
}

- (void).cxx_destruct;

@end
