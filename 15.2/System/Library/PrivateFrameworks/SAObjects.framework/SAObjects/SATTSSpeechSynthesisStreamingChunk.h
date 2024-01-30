@class NSData, SATTSSpeechSynthesisAudioInfo;

@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming

@property (copy, nonatomic) NSData *audioData;
@property (retain, nonatomic) SATTSSpeechSynthesisAudioInfo *audioInfo;
@property (nonatomic) long long index;

+ (id)speechSynthesisStreamingChunk;
+ (id)speechSynthesisStreamingChunkWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
