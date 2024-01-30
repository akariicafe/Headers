@interface SADeviceControlRebootDevice : SABaseClientBoundCommand

@property (nonatomic) BOOL isShutdownOnly;

+ (id)rebootDevice;
+ (id)rebootDeviceWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
