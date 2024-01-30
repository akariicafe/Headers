@class AXMSynthPatch, AXMADSREnvelope;

@interface AXMTone : NSObject

@property (nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) double frequency;
@property (readonly, nonatomic) AXMADSREnvelope *envelope;
@property (retain, nonatomic) AXMSynthPatch *patch;
@property (nonatomic) double gain;
@property (readonly, nonatomic) double aWeighting;

- (void).cxx_destruct;
- (id)init;
- (void)_setFrequency:(double)a0;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (double)_rawValueForTonePhase:(double)a0;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1;

@end
