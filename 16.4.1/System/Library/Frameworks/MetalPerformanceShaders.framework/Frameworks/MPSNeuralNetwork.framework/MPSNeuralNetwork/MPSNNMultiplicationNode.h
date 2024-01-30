@interface MPSNNMultiplicationNode : MPSNNBinaryArithmeticNode

- (Class)gradientClass;
- (void *)newFilterNode;

@end
