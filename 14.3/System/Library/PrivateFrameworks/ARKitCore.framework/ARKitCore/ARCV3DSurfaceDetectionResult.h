@interface ARCV3DSurfaceDetectionResult : NSObject

@property (readonly, nonatomic) struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *cv3dDetectionResult;

- (void)dealloc;
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane *x0; unsigned long long x1; } *)a0;
- (unsigned long long)numPlanes;
- (struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x0; double x1; double x2; } x0; double x1[3]; double x2[16]; int x3; struct CV3DSurfaceDetectionAlignedBoundingBox *x4; struct CV3DSurfaceDetectionRect *x5; struct CV3DSurfaceDetectionPoints2D *x6; struct CV3DSurfaceDetectionExtentGrid *x7; struct __CFUUID *x8; unsigned long long x9; struct __CFUUID **x10; unsigned long long x11; double x12; struct CV3DSurfaceDetectionSemantics *x13; } *)planeAtIndex:(unsigned long long)a0;

@end
