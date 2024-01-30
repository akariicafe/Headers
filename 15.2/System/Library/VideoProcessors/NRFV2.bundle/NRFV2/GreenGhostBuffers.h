@protocol MTLTexture;

@interface GreenGhostBuffers : NSObject {
    id<MTLTexture> _fusedLuma;
    id<MTLTexture> _fusedChroma;
    id<MTLTexture> _ggMaxFusionWeights;
}

- (void).cxx_destruct;

@end
