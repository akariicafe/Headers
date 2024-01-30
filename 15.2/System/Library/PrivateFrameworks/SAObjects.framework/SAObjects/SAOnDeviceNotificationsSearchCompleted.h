@class NSArray;

@interface SAOnDeviceNotificationsSearchCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *notifications;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
