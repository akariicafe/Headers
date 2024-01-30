@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode

@property (nonatomic) unsigned long long comparisonType;

- (void *)newFilterNode;
- (Class)gradientClass;

@end
