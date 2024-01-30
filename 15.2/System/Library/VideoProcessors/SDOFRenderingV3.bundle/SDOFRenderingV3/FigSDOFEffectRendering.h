@class SparseRenderer, NSArray, SDOFResources, BlurMapSmoothing, SDOFRenderingDiagnostics, FigSDOFRenderingTuningParameters, FigMetalContext, NSDictionary;

@interface FigSDOFEffectRendering : NSObject {
    unsigned long long _inputImageWidth;
    unsigned long long _inputImageHeight;
    unsigned long long _inputShiftMapWidth;
    unsigned long long _inputShiftMapHeight;
    unsigned long long _upsampledShiftMapWidth;
    unsigned long long _upsampledShiftMapHeight;
    SDOFResources *_resources;
    BlurMapSmoothing *_blurmapSmoothing;
    SparseRenderer *_sparseRenderer;
    SDOFRenderingDiagnostics *_diagnostics;
    FigSDOFRenderingTuningParameters *_tuningParameters;
    NSDictionary *_options;
}

@property (readonly, nonatomic) FigMetalContext *metalContext;
@property (retain, nonatomic) NSArray *faceLandmarksArray;

- (void)releaseResources;
- (int)prewarmWithTuningParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)setOptions:(id)a0;
- (BOOL)allocateResources;
- (id)initWithCommandQueue:(id)a0;
- (int)runSamplingWithImage:(struct opaqueCMSampleBuffer { } *)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputFaceAdjustedBlurMap:(struct __CVBuffer { } *)a2 inputAlphaMask:(struct __CVBuffer { } *)a3 inputGainMap:(struct __CVBuffer { } *)a4 resultImage:(struct __CVBuffer { } *)a5;
- (BOOL)allocateResourcesForInputImageWidth:(unsigned long long)a0 inputImageHeight:(unsigned long long)a1 shiftMapWidth:(unsigned long long)a2 shiftMapHeight:(unsigned long long)a3;
- (int)setOptionsInternal:(id)a0 isPrewarm:(BOOL)a1;
- (BOOL)sanityChecksSamplingWithImage:(struct __CVBuffer { } *)a0 inputFaceAdjustedBlurMap:(struct __CVBuffer { } *)a1 inputAlphaMask:(struct __CVBuffer { } *)a2 resultImage:(struct __CVBuffer { } *)a3;

@end
