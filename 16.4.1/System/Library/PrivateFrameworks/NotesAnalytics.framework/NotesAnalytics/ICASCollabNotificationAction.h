@interface ICASCollabNotificationAction : NSObject <AADataType>

@property (readonly, nonatomic) long long collabNotificationAction;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollabNotificationAction:(long long)a0;

@end
