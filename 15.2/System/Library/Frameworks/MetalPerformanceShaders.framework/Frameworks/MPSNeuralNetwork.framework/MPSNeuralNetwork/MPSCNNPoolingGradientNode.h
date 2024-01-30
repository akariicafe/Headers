@interface MPSCNNPoolingGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long strideInPixelsX;
@property (readonly, nonatomic) unsigned long long strideInPixelsY;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6 paddingPolicy:(id)a7;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 strideInPixelsX:(unsigned long long)a5 strideInPixelsY:(unsigned long long)a6 paddingPolicy:(id)a7;

@end
