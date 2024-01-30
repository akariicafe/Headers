@class ADEspressoJasperColorInferenceDescriptor, ADNetworkProvider, ADReprojection, ADJasperColorPipelineParameters, ADImageDescriptor;

@interface ADJasperColorPipeline : NSObject {
    long long _prioritization;
    ADNetworkProvider *_networkProvider;
    ADEspressoJasperColorInferenceDescriptor *_inferenceDesc;
    ADImageDescriptor *_processedDepthDesc;
    ADImageDescriptor *_processedConfDesc;
    ADImageDescriptor *_processedNormalsDesc;
    ADReprojection *_depthReprojector;
}

@property (copy, nonatomic) ADJasperColorPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)a0 andParameters:(id)a1;
- (id)LKTTexturesDescriptor;
- (long long)fuseCurrentDepth:(struct __CVBuffer { } *)a0 previousDepth:(struct __CVBuffer { } *)a1 intoOutputDepth:(struct __CVBuffer { } *)a2 currentConfidence:(struct __CVBuffer { } *)a3 previousConfidence:(struct __CVBuffer { } *)a4 intoOutputConfidence:(struct __CVBuffer { } *)a5 currentNormals:(struct __CVBuffer { } *)a6 previousNormals:(struct __CVBuffer { } *)a7 intoOutputNormals:(struct __CVBuffer { } *)a8 usingAlpha:(struct __CVBuffer { } *)a9;
- (id)initWithInputPrioritization:(long long)a0;
- (long long)postProcessConfidence:(struct __CVBuffer { } *)a0 confidenceOutput:(struct __CVBuffer { } *)a1 confidenceUnits:(unsigned long long)a2;
- (long long)postProcessWithDepth:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 depthOutput:(struct __CVBuffer { } *)a2 confidenceOutput:(struct __CVBuffer { } *)a3;
- (long long)projectJasperPoints:(id)a0 cropTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotateBy:(long long)a2 projectedPointsBuffer:(struct __CVBuffer { } *)a3;
- (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { } *)a0 prevDepth:(struct __CVBuffer { } *)a1 opticalFlow:(struct __CVBuffer { } *)a2 alphaMap:(struct __CVBuffer { } *)a3 depthOutput:(struct __CVBuffer { } *)a4;
- (long long)warpPreviousDepth:(struct __CVBuffer { } *)a0 intoCurrentDepth:(struct __CVBuffer { } *)a1 previousConfidence:(struct __CVBuffer { } *)a2 intoCurrentConfidence:(struct __CVBuffer { } *)a3 previousNormals:(struct __CVBuffer { } *)a4 intoCurrentNormals:(struct __CVBuffer { } *)a5 usingPoseDelta:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 previousCalibration:(id)a7 currentCalibration:(id)a8;
- (long long)postProcessConfidence:(struct __CVBuffer { } *)a0 confidenceOutput:(struct __CVBuffer { } *)a1 confidenceUnits:(unsigned long long)a2 depthUnits:(unsigned long long)a3;
- (long long)postProcessDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1;
- (long long)postProcessDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1 depthUnits:(unsigned long long)a2;
- (long long)postProcessWithDepth:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 normals:(struct __CVBuffer { } *)a2 depthOutput:(struct __CVBuffer { } *)a3 confidenceOutput:(struct __CVBuffer { } *)a4 normalsOutput:(struct __CVBuffer { } *)a5 normalsRequiredRotation:(long long)a6;
- (id)processedConfidenceOutputDescriptor;
- (id)processedDepthOutputDescriptor;
- (id)processedNormalsOutputDescriptor;
- (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { } *)a0 prevDepth:(struct __CVBuffer { } *)a1 currNormals:(struct __CVBuffer { } *)a2 prevNormals:(struct __CVBuffer { } *)a3 opticalFlow:(struct __CVBuffer { } *)a4 alphaMap:(struct __CVBuffer { } *)a5 depthOutput:(struct __CVBuffer { } *)a6 normalsOutput:(struct __CVBuffer { } *)a7;
- (long long)warpPreviousDepth:(struct __CVBuffer { } *)a0 intoCurrentDepth:(struct __CVBuffer { } *)a1 previousConfidence:(struct __CVBuffer { } *)a2 intoCurrentConfidence:(struct __CVBuffer { } *)a3 previousNormals:(struct __CVBuffer { } *)a4 intoCurrentNormals:(struct __CVBuffer { } *)a5 usingOpticalFlow:(struct __CVBuffer { } *)a6;

@end
