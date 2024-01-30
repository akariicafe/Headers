@class NSString;

@interface SAUIPerformNotificationAction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *notificationIdentifier;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
