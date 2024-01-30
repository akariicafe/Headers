@interface SADeviceControlTakeScreenshot : SABaseClientBoundCommand

+ (id)takeScreenshot;
+ (id)takeScreenshotWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
