@class HDCodableCompanionUserNotificationRequest;

@interface HDRemoteCompanionUserNotificationRequestContext : NSObject

@property (retain, nonatomic) HDCodableCompanionUserNotificationRequest *request;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
