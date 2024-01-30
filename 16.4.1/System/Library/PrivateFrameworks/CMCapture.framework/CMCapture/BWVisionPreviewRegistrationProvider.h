@class NSString, BWPixelBufferPool;

@interface BWVisionPreviewRegistrationProvider : NSObject <BWPreviewRegistrationProvider> {
    BWPixelBufferPool *_registrationPool;
    struct OpaqueVTPixelRotationSession { } *_registrationRotationSession;
    struct CGPoint { double x; double y; } _superWideOpticalCenterOffset;
    struct CGPoint { double x; double y; } _wideOpticalCenterOffset;
    struct CGPoint { double x; double y; } _teleOpticalCenterOffset;
    struct { int width; int height; } _sensorBinningFactor;
    struct { struct { float x; float y; } previousSpherePosition[3]; struct { float x; float y; } currentSpherePosition[3]; struct { float x; float y; } filteredSpherePosition[3]; BOOL supportAverageSpherePositionKey; struct { unsigned int configuration; struct { float x; float y; } opticalCenterOffset[3]; float baseZoomFactor[3]; float baseZoomFactorAdjustment[3]; float pixelSizeInMicron[3]; int quadraBinningFactor[3]; float currentToReferenceScaleRatio[7]; float currentToReferenceExtrinsicMatrix[7][12]; int referencePortIndex; int previousPortIndex; struct { float x; float y; } parallaxShift; struct { float x; float y; } stashedSpherePos[3]; float lastPracticalFocalLength[3]; float lastEffectiveFocalLength[3]; float lastPinholeCameraFocalLength[3]; BOOL decoupleBravoParallaxShiftFromSphereLensPosition; float minDistanceForBravoParallaxShift; float sphereScalingFactorUsedForParallaxShiftComputation; } bravoData; } _superWideToWideShiftState;
    struct { struct { float x; float y; } previousSpherePosition[3]; struct { float x; float y; } currentSpherePosition[3]; struct { float x; float y; } filteredSpherePosition[3]; BOOL supportAverageSpherePositionKey; struct { unsigned int configuration; struct { float x; float y; } opticalCenterOffset[3]; float baseZoomFactor[3]; float baseZoomFactorAdjustment[3]; float pixelSizeInMicron[3]; int quadraBinningFactor[3]; float currentToReferenceScaleRatio[7]; float currentToReferenceExtrinsicMatrix[7][12]; int referencePortIndex; int previousPortIndex; struct { float x; float y; } parallaxShift; struct { float x; float y; } stashedSpherePos[3]; float lastPracticalFocalLength[3]; float lastEffectiveFocalLength[3]; float lastPinholeCameraFocalLength[3]; BOOL decoupleBravoParallaxShiftFromSphereLensPosition; float minDistanceForBravoParallaxShift; float sphereScalingFactorUsedForParallaxShiftComputation; } bravoData; } _wideToTeleShiftState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)cleanupResources;
- (void)allocateResourcesWithVideoFormat:(id)a0 metalContext:(id)a1;
- (struct CGPoint { double x0; double x1; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { } *)a0 narrowerCamera:(struct opaqueCMSampleBuffer { } *)a1 widerToNarrowerCameraScale:(double)a2;
- (id)initWithCameraInfoByPortType:(id)a0 sensorBinningFactor:(struct { int x0; int x1; })a1;
- (struct { struct { BOOL x0; struct CGPoint { double x0; double x1; } x1; } x0[3]; })registerWiderCamera:(struct opaqueCMSampleBuffer { } *)a0 narrowerCamera:(struct opaqueCMSampleBuffer { } *)a1 widerToNarrowerCameraScale:(double)a2 isMacroScene:(BOOL)a3 macroTransitionType:(int)a4;

@end
