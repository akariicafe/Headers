@class ADJasperColorV2PipelineParameters, ADNetworkProvider, ADEspressoJasperColorV2InferenceDescriptor;

@interface ADJasperColorV2Pipeline : NSObject {
    long long _prioritization;
    ADNetworkProvider *_networkProvider;
    ADEspressoJasperColorV2InferenceDescriptor *_inferenceDesc;
}

@property (copy, nonatomic) ADJasperColorV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (long long)changePointCloudPOV:(id)a0 targetCamera:(id)a1 jasperToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 outputPointCloud:(id)a3;
- (id)initWithInputPrioritization:(long long)a0 espressoEngine:(unsigned long long)a1;
- (id)initWithInputPrioritization:(long long)a0 espressoEngine:(unsigned long long)a1 andParameters:(id)a2;
- (long long)postProcessDepth:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;
- (long long)postProcessDepth:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1 depthRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)postProcessDepth:(struct __CVBuffer { } *)a0 uncertainty:(struct __CVBuffer { } *)a1 filteredPointCloud:(id)a2 outputDepth:(struct __CVBuffer { } *)a3 outputUncertainty:(struct __CVBuffer { } *)a4 depthRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (long long)postProcessUncertainty:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1 confidenceUnits:(unsigned long long)a2;
- (long long)projectJasperPoints:(id)a0 cropTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotateBy:(long long)a2 projectedPointsBuffer:(struct __CVBuffer { } *)a3 filteredPoints:(id *)a4;

@end
