@class VCAudioRuleCollection;

@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig

@property (retain, nonatomic) VCAudioRuleCollection *audioRules;

- (void)dealloc;

@end
