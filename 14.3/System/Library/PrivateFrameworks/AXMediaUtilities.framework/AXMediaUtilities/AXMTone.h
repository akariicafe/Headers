@class AXMADSREnvelope;

@interface AXMTone : NSObject

@property (nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) double frequency;
@property (readonly, nonatomic) AXMADSREnvelope *envelope;
@property (nonatomic) unsigned long long waveform;
@property (nonatomic) double gain;
@property (readonly, nonatomic) double aWeighting;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (double)_rawValueForTonePhase:(double)a0;
- (void)renderInBuffer:(struct vector<int, std::__1::allocator<int> > { } *)a0 atFrame:(unsigned long long)a1;
- (void)_setFrequency:(double)a0;

@end
