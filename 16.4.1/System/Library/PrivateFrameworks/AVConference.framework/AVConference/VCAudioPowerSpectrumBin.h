@interface VCAudioPowerSpectrumBin : NSObject

@property (nonatomic) struct _VCRange { float min; float max; } frequencyRange;
@property (nonatomic) float powerLevel;

- (id)description;
- (id)initWithFrequencyRange:(struct _VCRange { float x0; float x1; })a0;

@end
