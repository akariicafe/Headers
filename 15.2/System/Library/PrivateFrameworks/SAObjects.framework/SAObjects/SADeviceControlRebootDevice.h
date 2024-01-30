@interface SADeviceControlRebootDevice : SABaseClientBoundCommand

+ (id)rebootDevice;
+ (id)rebootDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
