@protocol MTLTexture;

@interface FusionBuffers : NSObject {
    id<MTLTexture> simMapTex;
    id<MTLTexture> noiseMapLumaTex;
    id<MTLTexture> noiseMapChromaTex;
    id<MTLTexture> fusedLumaTex;
    id<MTLTexture> fusedChromaTex;
    id<MTLTexture> ggMaxFusionWeights;
}

- (void).cxx_destruct;

@end
