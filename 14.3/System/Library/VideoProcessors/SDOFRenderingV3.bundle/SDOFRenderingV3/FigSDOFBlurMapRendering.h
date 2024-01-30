@class FaceMask, SegmentationFusion, NSArray, SimpleLensModel, SDOFResources, SDOFRenderingDiagnostics, NSDictionary, FigMetalContext, FigSDOFRenderingTuningParameters, DisparityRefinement;

@interface FigSDOFBlurMapRendering : NSObject {
    unsigned long long _inputImageWidth;
    unsigned long long _inputImageHeight;
    unsigned long long _inputShiftMapWidth;
    unsigned long long _inputShiftMapHeight;
    unsigned long long _upsampledShiftMapWidth;
    unsigned long long _upsampledShiftMapHeight;
    SimpleLensModel *_lensModel;
    FaceMask *_faceMask;
    SegmentationFusion *_segmentationFusion;
    SDOFResources *_resources;
    SDOFRenderingDiagnostics *_diagnostics;
    FigSDOFRenderingTuningParameters *_tuningParameters;
    DisparityRefinement *_disparityRefinement;
    NSDictionary *_options;
}

@property (readonly, nonatomic) FigMetalContext *metalContext;
@property (retain, nonatomic) NSArray *faceLandmarksArray;

- (id)init;
- (BOOL)allocateResources;
- (int)setOptions:(id)a0;
- (void).cxx_destruct;
- (int)computeBlurMapWithImage:(struct opaqueCMSampleBuffer { } *)a0 shiftMap:(struct __CVBuffer { } *)a1 personSegmentationMask:(struct __CVBuffer { } *)a2 hairSemanticSegmentationMask:(struct __CVBuffer { } *)a3 glassesSemanticSegmentationMask:(struct __CVBuffer { } *)a4 resultFaceAdjustedBlurMap:(struct __CVBuffer { } *)a5;
- (void)releaseResources;
- (void)dealloc;
- (id)initWithCommandQueue:(id)a0;
- (BOOL)allocateResourcesForInputImageWidth:(unsigned long long)a0 inputImageHeight:(unsigned long long)a1 shiftMapWidth:(unsigned long long)a2 shiftMapHeight:(unsigned long long)a3;
- (int)prewarmWithTuningParameters:(id)a0;
- (int)setOptionsInternal:(id)a0 isPrewarm:(BOOL)a1;
- (BOOL)sanityChecksBlurMapWithImage:(struct __CVBuffer { } *)a0 shiftMap:(struct __CVBuffer { } *)a1 segmentationMask:(struct __CVBuffer { } *)a2 resultFaceAdjBlurMap:(struct __CVBuffer { } *)a3;
- (BOOL)detectFacesOnTele:(struct __CVBuffer { } *)a0 meta:(id)a1 to:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *)a2 maxFacesCount:(int)a3 facesCount:(int *)a4;

@end
