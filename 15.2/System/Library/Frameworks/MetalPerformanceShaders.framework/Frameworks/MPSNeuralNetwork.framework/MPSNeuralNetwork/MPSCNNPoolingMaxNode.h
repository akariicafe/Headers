@interface MPSCNNPoolingMaxNode : MPSCNNPoolingNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
