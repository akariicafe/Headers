@class NSString, NSDictionary, MRPlayerPath;

@interface MRNotificationMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithNotification:(id)a0;

@end
