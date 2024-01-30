@class BWInferenceVideoRequirement, BWDeepZoomInferenceConfiguration;
@protocol CMIDeepZoomProcessor;

@interface BWDeepZoomInferenceProvider : BWTiledEspressoInferenceProvider {
    BWDeepZoomInferenceConfiguration *_inferenceConfig;
    BWInferenceVideoRequirement *_inputVideoRequirement;
    BWInferenceVideoRequirement *_outputVideoRequirement;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    id<CMIDeepZoomProcessor> _deepZoomProcessor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _denormalizedSourceCropRect;
}

+ (void)initialize;

- (int)prepareForSubmissionWithWorkQueue:(id)a0;
- (int)type;
- (void)dealloc;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingStorage:(id)a1 withSubmissionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 workQueue:(id)a3 completionHandler:(id /* block */)a4;
- (int)createInputTileFor:(SEL)a0 to:(id)a1 withInputs:(struct __CVBuffer { } *)a2 atPosition:(id)a3 cmdBuffer:(id *)a4;
- (id)initWithConfiguration:(id)a0 resourceProvider:(id)a1;
- (int)preProcessOutputBuffer:(struct __CVBuffer { } *)a0 forMediaKey:(id)a1;
- (int)propagateInferenceResultFrom:(struct __CVBuffer { } *)a0 forMediaKey:(id)a1 to:(struct opaqueCMSampleBuffer { } *)a2;
- (int)purgeIntermediateResources;
- (int)writeOutputFor:(SEL)a0 to:(id)a1 fromNetworkOutputTiles:(struct __CVBuffer { } *)a2 withAdditionalPixelBuffers:(id)a3 withInputTilePixelBuffers:(id)a4 withInputFullPixelBuffers:(id)a5 atPosition:(id)a6 cmdBuffer:(id *)a7;

@end
