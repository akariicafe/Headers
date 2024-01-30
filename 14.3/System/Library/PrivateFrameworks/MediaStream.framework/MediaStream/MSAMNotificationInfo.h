@class NSString, MSAlertManager;

@interface MSAMNotificationInfo : NSObject {
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_runLoopSource;
}

@property (weak, nonatomic) MSAlertManager *owner;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (nonatomic) struct __CFUserNotification { } *userNotification;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)info;

- (void).cxx_destruct;
- (void)dealloc;

@end
