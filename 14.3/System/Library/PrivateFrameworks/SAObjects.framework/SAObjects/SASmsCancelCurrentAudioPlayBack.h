@interface SASmsCancelCurrentAudioPlayBack : SABaseClientBoundCommand

+ (id)cancelCurrentAudioPlayBack;
+ (id)cancelCurrentAudioPlayBackWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
