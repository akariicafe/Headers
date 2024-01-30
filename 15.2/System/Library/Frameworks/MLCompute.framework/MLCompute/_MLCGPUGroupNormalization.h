@interface _MLCGPUGroupNormalization : _MLCGPULayer

+ (id)layerWithDevice:(id)a0 numOfFeatureChannels:(unsigned long long)a1 groupCount:(unsigned long long)a2 beta:(id)a3 gamma:(id)a4 varianceEpsilon:(float)a5;

- (id)initWithDevice:(id)a0 numOfFeatureChannels:(unsigned long long)a1 groupCount:(unsigned long long)a2 beta:(id)a3 gamma:(id)a4 varianceEpsilon:(float)a5;

@end
