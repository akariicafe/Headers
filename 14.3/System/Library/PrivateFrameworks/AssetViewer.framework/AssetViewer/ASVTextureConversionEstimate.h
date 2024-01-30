@interface ASVTextureConversionEstimate : ASVTextureDescription

@property (nonatomic) long long converterType;
@property (nonatomic) struct { unsigned long long footprint; unsigned long long peak; } estimatedMemoryDelta;
@property (readonly, nonatomic) unsigned long long weight;

+ (id)textureDescription:(SEL)a0 downsampledToTryAndFitDestinationWithinSize:(id)a1;
+ (id)conversionEstimatesSortedByPeakMemoryUsage:(id)a0;
+ (unsigned long long)peakMemoryForConversionEstimates:(id)a0;
+ (id)heaviestConversionEstimate:(SEL)a0 withMinimumDestinationSize:(id)a1;
+ (id)conversionEstimatesFromTextureDescriptions:(SEL)a0 toFitAvailableMemory:(id)a1 withConverters:(unsigned long long)a2 preferredMaxTextureSize:(id)a3 outcome:(long long *)a4;

- (id)debugDescription;
- (unsigned long long)peakMemoryUsage;
- (void)updateFromConverter:(id)a0;
- (id)initWithTextureDescription:(id)a0 converter:(id)a1;

@end
