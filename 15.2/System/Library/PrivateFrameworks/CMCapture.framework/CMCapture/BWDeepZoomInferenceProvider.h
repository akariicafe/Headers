@class BWInferenceVideoRequirement, FigDeepZoomMetalStage, BWDeepZoomInferenceConfiguration;

@interface BWDeepZoomInferenceProvider : BWTiledEspressoInferenceProvider {
    BWInferenceVideoRequirement *_inputVideoRequirement;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    FigDeepZoomMetalStage *_deepZoomMetalStage;
    BWDeepZoomInferenceConfiguration *_inferenceConfig;
    struct { void /* unknown type, empty encoding */ size; void /* unknown type, empty encoding */ overlap; } _tileConfig;
    void /* unknown type, empty encoding */ _tileCount;
    void /* unknown type, empty encoding */ _tileScale;
    void /* unknown type, empty encoding */ _inputSize;
    void /* unknown type, empty encoding */ _inputROI;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _denormalizedSourceCropRect;
}

+ (void)initialize;

- (int)type;
- (void)dealloc;
- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (int)createInputTileFor:(SEL)a0 to:(id)a1 withInputs:(struct __CVBuffer { } *)a2 atPosition:(id)a3 cmdBuffer:(id *)a4;
- (int)writeOutputTile:(SEL)a0 to:(struct __CVBuffer { } *)a1 withAdditionalPixelBuffers:(struct __CVBuffer { } *)a2 withInputTilePixelBuffers:(id)a3 withInputFullPixelBuffers:(id)a4 atPosition:(id)a5 cmdBuffer:(id *)a6;
- (int)propagateInferenceResultsFrom:(struct __CVBuffer { } *)a0 to:(struct opaqueCMSampleBuffer { } *)a1;
- (int)purgeIntermediateResources;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0;

@end
