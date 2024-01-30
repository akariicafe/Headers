@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode

@property (nonatomic) unsigned long long kernelSizeInFeatureChannels;

+ (id)nodeWithSource:(id)a0 kernelSize:(unsigned long long)a1;

- (id)initWithSource:(id)a0;
- (void *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 kernelSize:(unsigned long long)a1;

@end
