@interface MPSNNSubtractionNode : MPSNNBinaryArithmeticNode

- (void *)newFilterNode;
- (Class)gradientClass;

@end
