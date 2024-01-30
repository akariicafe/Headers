@interface MPSCNNPoolingAverageNode : MPSCNNPoolingNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
