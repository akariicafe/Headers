@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (nonatomic) double delayTime;
@property (nonatomic) float feedback;
@property (nonatomic) float lowPassCutoff;
@property (nonatomic) float wetDryMix;

- (id)init;

@end
