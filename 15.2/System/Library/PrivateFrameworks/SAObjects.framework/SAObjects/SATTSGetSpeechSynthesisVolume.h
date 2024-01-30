@interface SATTSGetSpeechSynthesisVolume : SABaseClientBoundCommand

+ (id)getSpeechSynthesisVolume;
+ (id)getSpeechSynthesisVolumeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
