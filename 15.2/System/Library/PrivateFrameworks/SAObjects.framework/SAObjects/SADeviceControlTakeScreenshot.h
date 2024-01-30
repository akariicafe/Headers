@interface SADeviceControlTakeScreenshot : SABaseClientBoundCommand

+ (id)takeScreenshot;
+ (id)takeScreenshotWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
