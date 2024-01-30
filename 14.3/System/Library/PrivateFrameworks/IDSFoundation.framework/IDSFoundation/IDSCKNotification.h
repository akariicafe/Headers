@class NSString;

@interface IDSCKNotification : NSObject

@property (readonly, nonatomic) long long notificationType;
@property (readonly, copy, nonatomic) NSString *subscriptionID;

+ (Class)__class;
+ (id)notificationFromRemoteNotificationDictionary:(id)a0;

- (void).cxx_destruct;

@end
