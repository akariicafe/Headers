@class FigRegToolboxGPU, FigMetalContext, NSDictionary, BWPixelBufferPool, BWAdaptiveCorrectionPreviewRegistrationTuningParameters, BWMemoryPoolFlushAssertion;

@interface BWAdaptiveCorrectionPreviewRegistration : NSObject {
    BWAdaptiveCorrectionPreviewRegistrationTuningParameters *_tuningParameters;
    FigRegToolboxGPU *_keypointDetector;
    FigMetalContext *_metalContext;
    struct { float x0; float x1; float x2; float x3; float x4; float x5; } *_keypointList;
    struct OpaqueVTPixelRotationSession { } *_cropAndScaleSession;
    NSDictionary *_staticParametersByPortType;
    struct CalModel { double focalLengthPix[2]; double opticalCenterX[2]; double opticalCenterY[2]; double extrinRotRefefenceToAuxiliary[12]; } _correctedCalibration;
    double *_validKeypointsInSensorResolution[2];
    unsigned int _validKeypointsCount;
    double *_transposedKeypoints[2];
    double *_keypointDepths;
    double *_keypointWeights[3];
    struct { struct { void /* unknown type, empty encoding */ columns[3]; } narrowerToWiderTransforms[3]; } _registrationTransform;
    BWPixelBufferPool *_registrationPool;
    BWMemoryPoolFlushAssertion *_registrationPoolReadyAssertion;
    BOOL _resourcesCleaned;
    void /* function */ *_fullCorrectionFunction;
    void /* function */ *_computeVerticalBaselineTransformFunction;
    void /* function */ *_rotateCalModelFunction;
    void /* function */ *_transformPointsWithMatrixFunction;
    void *_disparityLib;
}

+ (void)initialize;
+ (struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0[3]; })flattenNarrowerToWiderTransforms:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0[3]; })a0 narrowerDimensions:(struct { int x0; int x1; })a1 narrowerFinalCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atNarrowerToWiderCameraScale:(double)a3 useYAnchorAtHeightCenter:(BOOL)a4;

- (void)dealloc;
- (void)cleanupResources;
- (int)allocateResourcesWithVideoFormat:(id)a0 metalContext:(id)a1;
- (int)computeAlignmentFromWiderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 narrowerSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 narrowerToWiderTransformsOut:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0[3]; } *)a2;
- (id)initWithCameraInfoByPortType:(id)a0;
- (int)registerWiderSampleBufferUsingADC:(struct opaqueCMSampleBuffer { } *)a0 narrowerSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 narrowerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 macroTransitionType:(int)a3 narrowerToWiderTransformsOut:(struct { struct { void /* unknown type, empty encoding */ x0[3]; } x0[3]; } *)a4;

@end
