@interface SAPostCalendarActivityNotification : SAPostPersonalDomainActivityNotification

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
