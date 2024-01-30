@class TSCH3DFramebuffer;

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline

@property (retain, nonatomic) TSCH3DFramebuffer *blendTexture;
@property (nonatomic) float blendFactor;

+ (id)effectsArray;

- (void).cxx_destruct;
- (void)updateShaderEffectsStates;

@end
