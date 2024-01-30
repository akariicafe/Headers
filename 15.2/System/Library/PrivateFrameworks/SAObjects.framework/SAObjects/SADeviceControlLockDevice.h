@interface SADeviceControlLockDevice : SABaseClientBoundCommand

+ (id)lockDevice;
+ (id)lockDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
