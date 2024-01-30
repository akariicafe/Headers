@class NSArray, PTMTLDropHints;
@protocol MTLTexture, MTLComputePipelineState;

@interface PTPyramidRGB : NSObject {
    id<MTLComputePipelineState> _downscaleGaussian3x3;
    id<MTLComputePipelineState> _updateLevel0Gaussian3x3FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0Gaussian3x3FromYUV[9];
    id<MTLComputePipelineState> _updateLevel0and1Gaussian3x3FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0and1Gaussian3x3FromYUV[9];
    id<MTLComputePipelineState> _updateLevel0Box2x2FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0Box2x2FromYUV[9];
    BOOL _skipFullSizeLayer;
    BOOL _doFirstLevelGaussianDownsample;
}

@property (retain, nonatomic) id<MTLTexture> rgbaPyramid;
@property (retain, nonatomic) NSArray *rgbaPyramidArray;
@property (nonatomic) BOOL bicubic;
@property (retain, nonatomic) PTMTLDropHints *dropHints;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 pixelFormat:(unsigned long long)a4 skipFullSizeLayer:(BOOL)a5 doFirstLevelGaussianDownsample:(BOOL)a6 mipmapLevelCount:(int)a7;
- (int)updateLevel0FromPTTextureRGBA:(id)a0 inPTTextureRGBA:(id)a1 doFirstLevelGaussianDownsample:(BOOL)a2;
- (int)updateLevel0FromPTTextureYUV:(id)a0 inPTTextureYUV:(id)a1 doFirstLevelGaussianDownsample:(BOOL)a2;
- (int)updateLevel0and1FromPTTextureRGBA:(id)a0 inPTTextureRGBA:(id)a1;
- (int)updateLevel0and1FromPTTextureYUV:(id)a0 inPTTextureYUV:(id)a1;
- (int)updatePyramid:(id)a0 offset:(int)a1;
- (int)updatePyramidFromPTTexture:(id)a0 inPTTexture:(id)a1;

@end
