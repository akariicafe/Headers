@interface SADeviceControlStopScreenRecording : SABaseClientBoundCommand

+ (id)stopScreenRecording;
+ (id)stopScreenRecordingWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
