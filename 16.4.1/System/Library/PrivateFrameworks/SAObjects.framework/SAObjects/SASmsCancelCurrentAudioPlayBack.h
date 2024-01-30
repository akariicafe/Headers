@interface SASmsCancelCurrentAudioPlayBack : SABaseClientBoundCommand

+ (id)cancelCurrentAudioPlayBack;
+ (id)cancelCurrentAudioPlayBackWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
