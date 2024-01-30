@class NSArray;

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (readonly, nonatomic) NSArray *bands;
@property (nonatomic) float globalGain;

- (id)init;
- (id)initWithNumberOfBands:(unsigned long long)a0;

@end
