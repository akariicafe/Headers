@interface MPSNNAdditionNode : MPSNNBinaryArithmeticNode

- (Class)gradientClass;
- (void *)newFilterNode;

@end
