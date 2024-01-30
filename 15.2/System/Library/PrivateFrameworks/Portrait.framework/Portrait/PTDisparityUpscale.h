@class PTUtil, NSArray, PTMTLDropHints, MPSImageSpatioTemporalGuidedFilter, NSMutableArray;
@protocol MTLTexture, MTLDevice;

@interface PTDisparityUpscale : NSObject {
    id<MTLDevice> _device;
    float _upscaleFactor;
    id<MTLTexture> _disparityUpscaled;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    unsigned long long _width;
    unsigned long long _height;
    PTUtil *_portraitUtil;
    id<MTLTexture> _guideConversionTexture;
    NSArray *_coefficientsTextureArray;
    NSMutableArray *_dropHintsTextures;
    PTMTLDropHints *_textureDropHints;
    BOOL _isShaderHarvesting;
}

- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 config:(id)a5;
- (id)guidedUpsampling:(id)a0 inDisparity:(id)a1 inRGBA:(id)a2 colorDepth:(long long)a3;
- (id)upscaledTexture;

@end
