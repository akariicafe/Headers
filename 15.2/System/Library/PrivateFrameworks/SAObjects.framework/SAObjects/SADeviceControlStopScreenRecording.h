@interface SADeviceControlStopScreenRecording : SABaseClientBoundCommand

+ (id)stopScreenRecording;
+ (id)stopScreenRecordingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
