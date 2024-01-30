@class NSString, SISceneSegmentationNetworkConfiguration, SIScaler, SISceneSegmentation, SIImageInputData;

@interface SISceneSegmentationAlgorithm : SIAlgorithm <SIVisualLoggerSupporting> {
    SIScaler *_scalerOne;
    SIScaler *_depthScaler;
    double _frameTimestamp;
    SISceneSegmentation *_model;
    SIImageInputData *_inputData;
}

@property (readonly, nonatomic) SISceneSegmentationNetworkConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })outputResolution;
+ (Class)outputDataClass;
+ (struct CGSize { double x0; double x1; })getOutputResolution:(long long)a0;
+ (Class)inputDataClass;
+ (id)subLoggers;

- (void).cxx_destruct;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 uncertaintyThreshold:(float)a2;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 andComputeEngine:(long long)a1;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3 resampleOutput:(BOOL)a4 networkConfiguration:(long long)a5;
- (long long)_inferenceWithInput:(id)a0 output:(id)a1;
- (BOOL)_isDepthAwareModel;
- (long long)_postprocessingOutput:(id)a0;
- (long long)_preprocessingInputData:(id)a0;
- (long long)_switchConfiguration:(unsigned long long)a0;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 managedBuffers:(BOOL)a2;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1 uncertaintyThreshold:(float)a2 useE5RT:(BOOL)a3;
- (id)initWithNetworkConfiguration:(id)a0;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 depth:(struct __CVBuffer { } *)a1 output:(id)a2 resampleOutput:(BOOL)a3 networkConfiguration:(long long)a4;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 depthInput:(struct __CVBuffer { } *)a1 output:(struct __IOSurface { } *)a2 confidenceOutput:(struct __IOSurface { } *)a3 uncertaintyOutput:(struct __IOSurface { } *)a4 resampleOutput:(BOOL)a5;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 depthInput:(struct __CVBuffer { } *)a1 output:(struct __IOSurface { } *)a2 confidenceOutput:(struct __IOSurface { } *)a3 uncertaintyOutput:(struct __IOSurface { } *)a4 resampleOutput:(BOOL)a5 networkConfiguration:(long long)a6;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 resampleOutput:(BOOL)a3;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 resampleOutput:(BOOL)a3 networkConfiguration:(long long)a4;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(struct __IOSurface { } *)a1 confidenceOutput:(struct __IOSurface { } *)a2 uncertaintyOutput:(struct __IOSurface { } *)a3 resampleOutput:(BOOL)a4;
- (long long)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1 resampleOutput:(BOOL)a2 networkConfiguration:(long long)a3;
- (BOOL)supportUncertainty;

@end
