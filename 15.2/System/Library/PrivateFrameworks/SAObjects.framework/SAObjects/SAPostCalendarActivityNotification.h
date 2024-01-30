@interface SAPostCalendarActivityNotification : SAPostPersonalDomainActivityNotification

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
