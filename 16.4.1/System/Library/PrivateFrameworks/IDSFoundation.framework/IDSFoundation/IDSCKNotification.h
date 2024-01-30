@class NSString;

@interface IDSCKNotification : NSObject

@property (readonly, nonatomic) long long notificationType;
@property (readonly, copy, nonatomic) NSString *subscriptionID;

+ (id)notificationFromRemoteNotificationDictionary:(id)a0;
+ (Class)__class;

- (void).cxx_destruct;

@end
