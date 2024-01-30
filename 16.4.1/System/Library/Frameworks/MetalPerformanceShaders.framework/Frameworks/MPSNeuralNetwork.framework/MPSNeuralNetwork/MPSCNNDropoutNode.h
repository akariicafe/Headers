@interface MPSCNNDropoutNode : MPSNNFilterNode

@property (readonly, nonatomic) float keepProbability;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } maskStrideInPixels;

+ (id)nodeWithSource:(id)a0;
+ (id)nodeWithSource:(id)a0 keepProbability:(float)a1;
+ (id)nodeWithSource:(id)a0 keepProbability:(float)a1 seed:(unsigned long long)a2 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;

- (id)initWithSource:(id)a0;
- (id)initWithSource:(id)a0 keepProbability:(float)a1;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 keepProbability:(float)a1 seed:(unsigned long long)a2 maskStrideInPixels:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void *)newFilterNode;

@end
