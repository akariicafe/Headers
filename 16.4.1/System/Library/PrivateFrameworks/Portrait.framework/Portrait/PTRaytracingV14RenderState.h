@class PTMTLDropHints, PTGlobalReduction, PTDisparityUpscale, NSString, PTQualitySettings;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV14RenderState : NSObject {
    int _quality;
    id<MTLBuffer> _disparityDiffGlobalMax;
    id<MTLTexture> _randomizedGauss;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLBuffer> randomUChars;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> randomGaussNoise;
@property (retain, nonatomic) id<MTLTexture> focusEdgeMask;
@property (retain, nonatomic) id<MTLTexture> raytracedRGBRadius;
@property (retain, nonatomic) id<MTLTexture> raytracedRGBRadiusUpscaled;
@property (retain, nonatomic) id<MTLTexture> disparityEdges;
@property (retain, nonatomic) id<MTLTexture> disparityEdgesTemp;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTGlobalReduction *globalReduction;
@property (retain, nonatomic) id<MTLBuffer> disparityDiffGlobalMinMax;
@property BOOL doVisualization;
@property void /* unknown type, empty encoding */ colorSize;
@property float coverageOverscan;
@property float anamorphicFactor;
@property float raytracingRadiusLocal;
@property float edgeTolerance;
@property (retain, nonatomic) PTQualitySettings *qualitySettings;
@property (retain, nonatomic) id<MTLTexture> disparityDiff;
@property (retain, nonatomic) PTMTLDropHints *disparityDiffDropHints;
@property (retain, nonatomic) PTMTLDropHints *dropHintsRaytracing;
@property (retain, nonatomic) PTMTLDropHints *dropHintsRGBRadiusUpscaled;

- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)dependentFrames;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 util:(id)a3 quality:(int)a4 colorSize:(struct CGSize { double x0; double x1; })a5 disparitySize:(struct CGSize { double x0; double x1; })a6 pyramidPixelFormat:(unsigned long long)a7 config:(id)a8 debugTextures:(id)a9;

@end
