@class NSString;

@interface SAUIPerformNotificationAction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *notificationIdentifier;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
