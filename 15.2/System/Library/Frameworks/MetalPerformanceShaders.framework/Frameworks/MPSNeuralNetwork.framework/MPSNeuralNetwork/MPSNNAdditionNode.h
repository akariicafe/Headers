@interface MPSNNAdditionNode : MPSNNBinaryArithmeticNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
