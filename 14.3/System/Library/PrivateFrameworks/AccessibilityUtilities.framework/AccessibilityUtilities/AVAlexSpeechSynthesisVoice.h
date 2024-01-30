@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>

- (id)language;
- (long long)quality;
- (id)nameWithoutQuality;
- (id)name;
- (id)identifier;

@end
