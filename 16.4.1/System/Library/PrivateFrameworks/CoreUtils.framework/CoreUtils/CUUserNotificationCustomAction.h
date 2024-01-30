@class UNNotificationAction;

@interface CUUserNotificationCustomAction : NSObject

@property (retain, nonatomic) UNNotificationAction *action;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
