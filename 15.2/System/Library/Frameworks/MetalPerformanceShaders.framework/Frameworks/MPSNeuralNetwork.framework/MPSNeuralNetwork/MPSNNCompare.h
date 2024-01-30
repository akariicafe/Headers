@interface MPSNNCompare : MPSCNNArithmetic

@property (nonatomic) unsigned long long comparisonType;
@property (nonatomic) float threshold;

- (id)initWithDevice:(id)a0;

@end
