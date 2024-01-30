@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float overlap;

- (id)init;

@end
