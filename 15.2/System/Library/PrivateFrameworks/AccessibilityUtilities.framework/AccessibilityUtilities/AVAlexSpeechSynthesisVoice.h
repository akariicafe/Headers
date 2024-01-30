@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>

- (long long)quality;
- (id)identifier;
- (id)nameWithoutQuality;
- (id)name;
- (id)language;

@end
