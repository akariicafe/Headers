@interface MPSNNMultiplicationNode : MPSNNBinaryArithmeticNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
