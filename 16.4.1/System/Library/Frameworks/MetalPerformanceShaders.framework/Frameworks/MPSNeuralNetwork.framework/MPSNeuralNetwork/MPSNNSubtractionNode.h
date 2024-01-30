@interface MPSNNSubtractionNode : MPSNNBinaryArithmeticNode

- (Class)gradientClass;
- (void *)newFilterNode;

@end
