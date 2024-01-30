@class NSString;

@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;
@property (copy, nonatomic) NSString *notificationBody;
@property (copy, nonatomic) NSString *originatingDeviceName;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
