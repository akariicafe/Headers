@interface SADeviceControlStartScreenRecording : SABaseClientBoundCommand

+ (id)startScreenRecording;
+ (id)startScreenRecordingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
