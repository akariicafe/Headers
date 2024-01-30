@class NSString, ARCV3DSurfaceDetectionResult, NSDictionary;

@interface ARPlaneData : NSObject <ARResultData> {
    NSDictionary *_planeIdentifiers;
    struct { void /* unknown type, empty encoding */ columns[4]; } _renderingToVision;
}

@property (readonly, nonatomic) ARCV3DSurfaceDetectionResult *detectionResult;
@property (readonly, nonatomic) BOOL sceneUnderstandingEnabled;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionToRendering;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)_surfaceOrientedPivotForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })_planeToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 pivot:(float)a1;
+ (void)setSemanticsFromCV3D:(struct CV3DSurfaceDetectionSemantics { double x0[12]; int x1; } *)a0 sceneUnderstandingEnabled:(BOOL)a1 onPlane:(id)a2;
+ (id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *)a0;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *)a0 detectionTypeMask:(unsigned long long)a1 sceneUnderstandingEnabled:(BOOL)a2;
- (id)_updatedAnchor:(id)a0 forPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)_anchorForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 identifier:(id)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)_worldAlignmentRotationForReferenceTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 planeAlignment:(long long)a1;
- (void)_updateExtentsForPlaneAnchor:(id)a0 plane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a1 pivot:(float)a2;
- (struct { })_boundsForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 surfaceOrientedPivot:(float)a1 alignmentRotation:(long long)a2;
- (id)_geometryForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 surfaceOrientedPivot:(float)a1 alignmentRotation:(long long)a2 planeBounds:(struct { })a3;
- (id)_gridExtentForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 surfaceOrientedPivot:(float)a1 alignmentRotation:(long long)a2;
- (struct { })_orientedBoundsForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)a0 surfaceOrientedPivot:(float)a1 alignmentRotation:(long long)a2;
- (id)initWithARPlaneData:(id)a0;
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *)a0 detectionTypeMask:(unsigned long long)a1 sceneUnderstandingEnabled:(BOOL)a2 visionToRendering:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;

@end
