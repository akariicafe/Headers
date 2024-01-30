@class NSString, ARImageCroppingTechnique, ARImageRotationTechnique;

@interface ARDepthEstimationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState, ARMLDepthDataSourceProvider> {
    struct __CVPixelBufferPool { } *_outputPixelBufferPool;
    struct __CVPixelBufferPool { } *_scaledOutputPixelBufferPool;
    struct __CVPixelBufferPool { } *_alphaChannelPixelBufferPool;
    ARImageRotationTechnique *_rotationTechnique;
    ARImageCroppingTechnique *_imageCroppingTechnique;
}

@property (readonly, nonatomic) BOOL isBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long depthDataSource;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_fullDescription;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMLProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)a0;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)a0 orientation:(long long)a1 outputSize:(struct CGSize { double x0; double x1; })a2;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)a0;
- (void)networkModeDidChange:(id)a0 toMode:(id)a1;
- (id)createResultDataFromTensors:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 numberOfOutputTensors:(unsigned long long)a1 imageDataForNeuralNetwork:(id)a2 inputImageData:(id)a3 rotationNeeded:(long long)a4 regionOfInterest:(struct CGSize { double x0; double x1; })a5;
- (long long)numberOfInputChannelsToExpectInNetwork;

@end
