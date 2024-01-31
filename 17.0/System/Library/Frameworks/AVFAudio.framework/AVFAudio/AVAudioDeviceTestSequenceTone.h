@interface AVAudioDeviceTestSequenceTone : AVAudioDeviceTestSequence

@property (nonatomic) double frequency;
@property (nonatomic) double amplitude;
@property (nonatomic) double soundLevel;
@property (nonatomic) int numberOfPulses;
@property (nonatomic) double pulseDuration;
@property (nonatomic) double pauseDuration;
@property (nonatomic) double rampDuration;
@property (nonatomic) double duration;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
