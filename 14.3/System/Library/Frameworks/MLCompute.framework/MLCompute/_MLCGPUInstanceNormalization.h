@interface _MLCGPUInstanceNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)a0 numOfFeatureChannels:(unsigned long long)a1 beta:(id)a2 gamma:(id)a3 varianceEpsilon:(float)a4 momentum:(float)a5;

- (id)initWithDevice:(id)a0 numOfFeatureChannels:(unsigned long long)a1 beta:(id)a2 gamma:(id)a3 varianceEpsilon:(float)a4 momentum:(float)a5;

@end
