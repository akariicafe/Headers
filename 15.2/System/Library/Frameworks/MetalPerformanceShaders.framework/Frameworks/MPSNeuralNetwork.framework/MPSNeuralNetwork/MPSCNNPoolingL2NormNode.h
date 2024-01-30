@interface MPSCNNPoolingL2NormNode : MPSCNNPoolingNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
