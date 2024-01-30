@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>

- (long long)quality;
- (id)identifier;
- (id)language;
- (id)name;
- (id)nameWithoutQuality;

@end
