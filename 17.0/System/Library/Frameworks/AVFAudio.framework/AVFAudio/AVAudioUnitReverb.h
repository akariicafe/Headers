@interface AVAudioUnitReverb : AVAudioUnitEffect

@property (nonatomic) float wetDryMix;

- (id)init;
- (void)loadFactoryPreset:(long long)a0;

@end
