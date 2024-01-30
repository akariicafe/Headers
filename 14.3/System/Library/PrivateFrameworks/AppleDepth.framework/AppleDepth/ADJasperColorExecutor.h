@class ADJasperColorPipeline, ADLKTExecutor, ADCameraCalibration, ADJasperColorExecutorParameters;

@interface ADJasperColorExecutor : ADExecutor {
    ADJasperColorPipeline *_pipeline;
    ADLKTExecutor *_lktExecutor;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmPostProcessedDepth;
    struct __CVBuffer { } *_itmUnprocessedConf;
    struct __CVBuffer { } *_itmPostProcessedConf;
    struct __CVBuffer { } *_itmUnprocessedNormals;
    struct __CVBuffer { } *_itmPostProcessedNormals;
    struct __CVBuffer { } *_itmUnprocessedAlpha;
    struct __CVBuffer { } *_itmWarpedPrevDepth;
    struct __CVBuffer { } *_itmWarpedPrevConf;
    struct __CVBuffer { } *_itmOpticalFlow;
    struct __CVBuffer { } *_itmPrevProcessedFusedDepth;
    struct __CVBuffer { } *_itmCurrProcessedFusedDepth;
    struct __CVBuffer { } *_itmPrevProcessedFusedConf;
    struct __CVBuffer { } *_itmCurrProcessedFusedConf;
    struct __CVBuffer { } *_itmPrevProcessedFusedNormals;
    struct __CVBuffer { } *_itmCurrProcessedFusedNormals;
    BOOL _firstTimeExecution;
    BOOL _opticalFlowEnabled;
    struct { void /* unknown type, empty encoding */ columns[4]; } _prevPose;
    ADCameraCalibration *_prevCamCalib;
}

@property (retain, nonatomic) ADJasperColorExecutorParameters *executorParameters;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputPrioritization:(long long)a0;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (id)getIntermediates;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 useTemporalConsistency:(BOOL)a3 rotationPreference:(unsigned long long)a4;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 outNormalsMap:(struct __CVBuffer **)a4 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 cameraCalibration:(id)a6;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 useTemporalConsistency:(BOOL)a3;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 worldToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 cameraCalibration:(id)a5;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 outDepthMap:(struct __CVBuffer **)a2 outConfMap:(struct __CVBuffer **)a3 outNormalsMap:(struct __CVBuffer **)a4;

@end
