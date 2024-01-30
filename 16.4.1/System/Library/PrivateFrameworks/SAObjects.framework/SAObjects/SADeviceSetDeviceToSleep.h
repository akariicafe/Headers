@interface SADeviceSetDeviceToSleep : SADomainCommand

+ (id)setDeviceToSleep;
+ (id)setDeviceToSleepWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
