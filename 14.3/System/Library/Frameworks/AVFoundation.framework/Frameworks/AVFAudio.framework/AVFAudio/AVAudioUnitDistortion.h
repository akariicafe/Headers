@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (nonatomic) float preGain;
@property (nonatomic) float wetDryMix;

- (id)init;
- (void)loadFactoryPreset:(long long)a0;
- (struct AUPreset { int x0; struct __CFString *x1; })FillOutAUPreset:(long long)a0;

@end
