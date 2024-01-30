@interface MPSCNNNormalizationNode : MPSNNFilterNode

@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;

+ (id)nodeWithSource:(id)a0;

- (id)initWithSource:(id)a0;

@end
