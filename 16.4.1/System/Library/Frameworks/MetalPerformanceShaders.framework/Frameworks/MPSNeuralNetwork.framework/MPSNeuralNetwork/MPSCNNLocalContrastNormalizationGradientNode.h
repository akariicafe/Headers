@interface MPSCNNLocalContrastNormalizationGradientNode : MPSNNGradientFilterNode

@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) float p0;
@property (nonatomic) float pm;
@property (nonatomic) float ps;
@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4;
- (void *)newFilterNode;

@end
