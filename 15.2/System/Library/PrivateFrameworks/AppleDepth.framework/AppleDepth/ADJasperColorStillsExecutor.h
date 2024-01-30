@class NSString, ADJasperColorStillsPipeline, ADJasperPointCloud, ADJasperColorStillsExecutorParameters, ADEspressoWrapper, ADEspressoBufferHandle;

@interface ADJasperColorStillsExecutor : ADExecutor {
    BOOL _isPrepared;
    ADJasperColorStillsPipeline *_pipeline;
    NSString *_correctionLogString;
    struct __CVBuffer { } *_itmCroppedScaledColor;
    struct __CVBuffer { } *_itmRotatedColor;
    struct __CVBuffer { } *_itmPreProcessedColor;
    struct __CVBuffer { } *_itmPreProcessedJasper;
    struct __CVBuffer { } *_itmPreProcessedJasperForCorrection;
    ADJasperPointCloud *_aggregatedPointCloud;
    ADJasperPointCloud *_aggregatedPointCloudBeforeCorrection;
    struct __CVBuffer { } *_itmUnprocessedDepth;
    struct __CVBuffer { } *_itmUnscaledProcessedDepth;
    ADEspressoWrapper *_correctionBackendEspressoRunner;
    ADEspressoWrapper *_correctionFrontendEspressoRunner;
    ADEspressoBufferHandle *_sijFeaturesOutputBuffer;
    float *_sijFeaturesOutput;
    float *_sijFeaturesInput;
    float *_sijAnglesOutput;
    float *_sijErrorsOutput;
}

@property (copy, nonatomic) ADJasperColorStillsExecutorParameters *executorParameters;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)executeWithColor:(struct __CVBuffer { } *)a0 pointCloudArray:(id)a1 jasper2ColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 colorCameraCalibration:(id)a3 outDepthMap:(struct __CVBuffer **)a4;
- (long long)prepareForEngineType:(unsigned long long)a0 inputSize:(struct CGSize { double x0; double x1; })a1;
- (void)deallocateEspressoBuffers;
- (long long)allocateIntermediateBuffers;
- (long long)numberOfExecutionSteps;
- (id)getIntermediates;

@end
