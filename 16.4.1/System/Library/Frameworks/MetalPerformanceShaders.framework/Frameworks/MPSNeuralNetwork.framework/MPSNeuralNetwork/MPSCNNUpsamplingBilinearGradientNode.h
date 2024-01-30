@interface MPSCNNUpsamplingBilinearGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) double scaleFactorX;
@property (readonly, nonatomic) double scaleFactorY;

+ (id)nodeWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 scaleFactorX:(double)a3 scaleFactorY:(double)a4;

- (id)initWithGradientImages:(id)a0 forwardFilter:(id)a1;
- (id)initWithSourceGradient:(id)a0 sourceImage:(id)a1 gradientState:(id)a2 scaleFactorX:(double)a3 scaleFactorY:(double)a4;
- (void *)newFilterNode;

@end
