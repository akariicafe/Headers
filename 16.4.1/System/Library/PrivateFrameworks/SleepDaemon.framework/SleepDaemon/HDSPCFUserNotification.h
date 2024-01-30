@class NSString;

@interface HDSPCFUserNotification : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct __CFUserNotification { } *notification;
@property (readonly, copy, nonatomic) id /* block */ actionHandler;

+ (id)userNotificationWithIdentifier:(id)a0 notification:(struct __CFUserNotification { } *)a1 actionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 notification:(struct __CFUserNotification { } *)a1 actionHandler:(id /* block */)a2;

@end
