@class UNNotificationRequest, NSString;

@interface ASFriendNotificationContainer : NSObject

@property (readonly, nonatomic) UNNotificationRequest *notificationRequest;
@property (readonly, nonatomic) NSString *friendUUID;
@property (readonly, nonatomic) long long notificationRequestType;

+ (id)containerWithNotificationRequest:(id)a0 friendUUID:(id)a1 bulletinType:(long long)a2;

- (void).cxx_destruct;
- (id)initWithNotificationRequest:(id)a0 friendUUID:(id)a1 bulletinType:(long long)a2;

@end
