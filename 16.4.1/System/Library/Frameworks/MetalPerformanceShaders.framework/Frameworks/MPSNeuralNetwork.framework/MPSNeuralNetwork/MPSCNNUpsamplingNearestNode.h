@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode

@property (readonly, nonatomic) double scaleFactorX;
@property (readonly, nonatomic) double scaleFactorY;

+ (id)nodeWithSource:(id)a0 integerScaleFactorX:(unsigned long long)a1 integerScaleFactorY:(unsigned long long)a2;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 integerScaleFactorX:(unsigned long long)a1 integerScaleFactorY:(unsigned long long)a2;
- (void *)newFilterNode;

@end
