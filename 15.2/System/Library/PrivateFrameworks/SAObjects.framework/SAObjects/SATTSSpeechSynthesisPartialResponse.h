@class SATTSSpeechSynthesisAudioInfo, SAUIAudioData;

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *aceAudioData;
@property (retain, nonatomic) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property (nonatomic) long long currentPacketNumber;

+ (id)speechSynthesisPartialResponse;
+ (id)speechSynthesisPartialResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
