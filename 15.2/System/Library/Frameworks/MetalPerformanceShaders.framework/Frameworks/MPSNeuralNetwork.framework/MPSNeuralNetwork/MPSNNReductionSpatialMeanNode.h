@interface MPSNNReductionSpatialMeanNode : MPSNNUnaryReductionNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
