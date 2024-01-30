@class NSString, NSDictionary, MRPlayerPath;

@interface MRNotificationMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithNotification:(id)a0;
- (unsigned long long)type;

@end
