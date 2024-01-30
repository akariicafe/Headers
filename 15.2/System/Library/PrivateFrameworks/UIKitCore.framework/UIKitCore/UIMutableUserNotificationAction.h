@class NSString, NSDictionary;

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired;
@property (nonatomic, getter=isDestructive) BOOL destructive;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
