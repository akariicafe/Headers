@interface SADeviceSetDeviceToSleep : SADomainCommand

+ (id)setDeviceToSleep;
+ (id)setDeviceToSleepWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
