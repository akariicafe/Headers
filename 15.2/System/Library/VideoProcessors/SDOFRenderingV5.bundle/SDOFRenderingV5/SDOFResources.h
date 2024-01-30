@class FigMetalContext;
@protocol MTLTexture, MTLBuffer;

@interface SDOFResources : NSObject {
    id<MTLBuffer> _halfResRGBABuffer1;
    id<MTLBuffer> _halfResRGBABuffer2;
}

@property (readonly, nonatomic) FigMetalContext *metalContext;
@property (readonly, nonatomic) int referenceCount;
@property (readonly, nonatomic) int activeCount;
@property (readonly, nonatomic) unsigned long long inputImageWidth;
@property (readonly, nonatomic) unsigned long long inputImageHeight;
@property (readonly, nonatomic) unsigned long long shiftMapWidth;
@property (readonly, nonatomic) unsigned long long shiftMapHeight;
@property (readonly, nonatomic) id<MTLTexture> disparityRefinement_weightsX_tex;
@property (readonly, nonatomic) id<MTLTexture> disparityRefinement_weightsY_tex;
@property (readonly, nonatomic) id<MTLTexture> disparityRefinement_sampledD_tex;
@property (readonly, nonatomic) id<MTLTexture> disparityRefinement_preproc_tex;
@property (readonly, nonatomic) id<MTLTexture> disparityRefinement_blurmap_tex;
@property (readonly, nonatomic) id<MTLTexture> faceMask_adjBlurmap_tex;
@property (readonly, nonatomic) id<MTLTexture> blurMapSmoothing_intermediate_tex;
@property (readonly, nonatomic) id<MTLTexture> blurMapSmoothing_result_tex;
@property (readonly, nonatomic) id<MTLTexture> blurMapRefinement_alphaMaskDelta;
@property (readonly, nonatomic) id<MTLTexture> blurMapRefinement_hairMaskDelta;
@property (readonly, nonatomic) id<MTLTexture> blurMapRefinement_intermediate;
@property (readonly, nonatomic) id<MTLBuffer> slm_mapping_buf;
@property (readonly, nonatomic) id<MTLBuffer> rendering_xhlrbProcessList_buf;
@property (readonly, nonatomic) id<MTLTexture> rendering_halfResRGBA1_tex;
@property (readonly, nonatomic) id<MTLTexture> rendering_halfResRGBA2_tex;
@property (readonly, nonatomic) id<MTLTexture> rendering_halfResRGBAsRGB1_texalias;
@property (readonly, nonatomic) id<MTLTexture> rendering_halfResRGBAsRGB2_texalias;
@property (readonly, nonatomic) id<MTLTexture> rendering_halfResRG_tex;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deallocateResources;
- (void)clearInstance;
- (id)initInstance;
- (int)allocateResourcesUsingMetalContext:(id)a0 inputImageWidth:(unsigned long long)a1 inputImageHeight:(unsigned long long)a2 shiftMapWidth:(unsigned long long)a3 shiftMapHeight:(unsigned long long)a4;
- (BOOL)activateResources;
- (void)deactivateResources;

@end
