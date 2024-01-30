@class MPSSVGF;
@protocol MTLTexture, MPSSVGFTextureAllocator;

@interface MPSSVGFDenoiser : NSObject {
    id<MTLTexture> _prevFrameCountTexture;
    id<MTLTexture> _prevMomentsTexture;
    id<MTLTexture> _prevMomentsTexture2;
    id<MTLTexture> _prevTexture;
    id<MTLTexture> _prevTexture2;
    unsigned long long _bilateralFilterIterations;
    BOOL _clear;
}

@property (readonly, nonatomic) MPSSVGF *svgf;
@property (readonly, nonatomic) id<MPSSVGFTextureAllocator> textureAllocator;
@property (nonatomic) unsigned long long bilateralFilterIterations;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (void)clearTemporalHistory;
- (void)encodeClearToCommandBuffer:(id)a0;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id *)a2 sourceTexture2:(id)a3 destinationTexture2:(id *)a4 motionVectorTexture:(id)a5 depthNormalTexture:(id)a6 previousDepthNormalTexture:(id)a7;
- (id)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 motionVectorTexture:(id)a2 depthNormalTexture:(id)a3 previousDepthNormalTexture:(id)a4;
- (id)initWithSVGF:(id)a0 textureAllocator:(id)a1;
- (void)releaseTemporaryTextures;

@end
