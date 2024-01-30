@class ARPlaneData, NSString, ARRawSceneUnderstandingData, ARWorldTrackingTechnique, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARPlaneEstimationTechnique : ARTechnique <ARWorldTrackingTechniqueObserver> {
    NSObject<OS_dispatch_semaphore> *_semaphoreResult;
    ARPlaneData *_planeResultData;
    ARRawSceneUnderstandingData *_rawSceneUnderstandingData;
}

@property (retain, nonatomic) ARWorldTrackingTechnique *worldTrackingTechnique;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_detectPlanesWithDetector:(struct CV3DSurfaceDetectionContext { } *)a0 types:(unsigned long long)a1 camera:(id)a2 referenceFeaturePoints:(id)a3 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4;
+ (id)detectPlanes:(unsigned long long)a0 withFrame:(id)a1;

- (BOOL)isBusy;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_fullDescription;
- (void).cxx_destruct;
- (id)initWithTrackingTechnique:(id)a0;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (id)resultDataClasses;
- (void)siblingTechniquesDidChange:(id)a0;
- (void)technique:(id)a0 didDetectPlane:(id)a1 timestamp:(double)a2;
- (void)technique:(id)a0 didOutputSceneUnderstandingData:(id)a1 timestamp:(double)a2;

@end
