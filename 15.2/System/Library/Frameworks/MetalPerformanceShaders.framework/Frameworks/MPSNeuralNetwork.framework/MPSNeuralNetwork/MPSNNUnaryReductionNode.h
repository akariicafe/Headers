@interface MPSNNUnaryReductionNode : MPSNNFilterNode

@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRectSource;

+ (id)nodeWithSource:(id)a0;

- (id)initWithSource:(id)a0;
- (id)gradientFilterWithSource:(id)a0;

@end
