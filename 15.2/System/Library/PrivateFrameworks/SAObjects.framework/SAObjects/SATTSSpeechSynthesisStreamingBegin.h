@class SAUIAudioDescription, NSString, SATTSSpeechSynthesisVoice, SATTSSpeechSynthesisResource;

@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming

@property (retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
@property (retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property (retain, nonatomic) SATTSSpeechSynthesisResource *speechSynthesisResource;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *speechSynthesisVoice;
@property (nonatomic) float streamingPlaybackBufferSize;
@property (copy, nonatomic) NSString *text;

+ (id)speechSynthesisStreamingBegin;
+ (id)speechSynthesisStreamingBeginWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
