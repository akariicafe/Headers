@class NSString, ARCV3DPlaneDetectionPlaneList, NSDictionary;

@interface ARPlaneData : NSObject <ARResultData, ARQATraceable> {
    NSDictionary *_planeIdentifiers;
    BOOL _sceneUnderstandingEnabled;
    BOOL _applyPivotRotation;
    struct { void /* unknown type, empty encoding */ columns[4]; } _visionToRendering;
}

@property (readonly, nonatomic) ARCV3DPlaneDetectionPlaneList *detectionResult;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

+ (float)_pivotForPlane:(struct CV3DPlaneDetectionPlane { } *)a0;
+ (id)_anchorForPlane:(struct CV3DPlaneDetectionPlane { } *)a0 identifier:(id)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 visionToRendering:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 sceneUnderstandingEnabled:(BOOL)a4 applyPivotRotation:(BOOL)a5 detectionTypeMask:(unsigned long long)a6;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })_applyPivotToPlaneToWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 pivot:(float)a1;
+ (float)_surfacePivotForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })_surfaceToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 pivot:(float)a1;
+ (void)_updateExtentsForPlaneAnchor:(id)a0 plane:(struct CV3DPlaneDetectionPlane { } *)a1 pivot:(float)a2 applyPivotRotation:(BOOL)a3 detectionTypeMask:(unsigned long long)a4;
+ (long long)_worldAlignmentRotationForReferenceTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 planeAlignment:(long long)a1 detectionTypeMask:(unsigned long long)a2;
+ (id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *)a0;
+ (void)setSemanticsFromCV3D:(int)a0 labelProbabilities:(id)a1 sceneUnderstandingEnabled:(BOOL)a2 onPlane:(id)a3;

- (void).cxx_destruct;
- (id)_anchorForPlane:(struct CV3DPlaneDetectionPlane { } *)a0 identifier:(id)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)_updatedAnchor:(id)a0 forPlane:(struct CV3DPlaneDetectionPlane { } *)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (BOOL)applyPivotRotation;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { } *)a0 detectionTypeMask:(unsigned long long)a1 sceneUnderstandingEnabled:(BOOL)a2;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { } *)a0 detectionTypeMask:(unsigned long long)a1 sceneUnderstandingEnabled:(BOOL)a2 visionToRendering:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 atTimestamp:(double)a4;

@end
