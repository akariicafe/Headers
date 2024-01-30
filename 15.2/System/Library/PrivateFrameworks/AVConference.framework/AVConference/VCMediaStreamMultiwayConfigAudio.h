@class VCAudioRuleCollection;

@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig

@property (retain, nonatomic) VCAudioRuleCollection *audioRules;
@property (nonatomic) unsigned int preferredMediaBitrate;

- (void)dealloc;

@end
