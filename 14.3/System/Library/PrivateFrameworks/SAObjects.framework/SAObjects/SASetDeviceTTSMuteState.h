@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (nonatomic) BOOL textToSpeechIsMuted;

+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
