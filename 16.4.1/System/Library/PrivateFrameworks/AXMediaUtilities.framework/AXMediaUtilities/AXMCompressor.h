@interface AXMCompressor : AXMAudioEffect

@property (nonatomic) double ratio;
@property (nonatomic) double gainReduction;
@property (nonatomic) double engagement;
@property (nonatomic) unsigned long long emaSamples;
@property (nonatomic) double ema;
@property (nonatomic) double attackMS;
@property (nonatomic) double releaseMS;
@property (nonatomic) double compressionRatio;
@property (nonatomic) double gain;
@property (nonatomic) double threshold;
@property (nonatomic) double sampleRate;

+ (id)limiter;
+ (id)compressor;

- (void)processSamples:(unsigned long long)a0;
- (id)initWithAttack:(double)a0 release:(double)a1 compressionRatio:(double)a2 threshold:(double)a3 sampleRate:(double)a4;

@end
