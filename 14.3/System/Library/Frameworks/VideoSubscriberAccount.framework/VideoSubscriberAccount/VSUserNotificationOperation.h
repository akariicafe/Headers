@class NSURL, NSString;

@interface VSUserNotificationOperation : NSOperation {
    struct __CFUserNotification { } *_notification;
}

@property (nonatomic) unsigned long long response;
@property (nonatomic) void /* function */ *userNotificationCreateProc;
@property (nonatomic) void /* function */ *userNotificationReceiveResponseProc;
@property (nonatomic) void /* function */ *userNotificationCancelProc;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (copy, nonatomic) NSString *alternateButtonTitle;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)main;

@end
