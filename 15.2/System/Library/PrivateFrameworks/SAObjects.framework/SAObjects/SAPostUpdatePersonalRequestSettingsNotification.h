@class NSString;

@interface SAPostUpdatePersonalRequestSettingsNotification : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *homeId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
