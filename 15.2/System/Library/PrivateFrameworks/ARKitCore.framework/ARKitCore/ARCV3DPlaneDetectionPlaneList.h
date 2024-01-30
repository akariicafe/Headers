@interface ARCV3DPlaneDetectionPlaneList : NSObject

@property (readonly, nonatomic) const struct CV3DPlaneDetectionPlaneList { } *cv3dPlaneDetections;

- (void)dealloc;
- (id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList { } *)a0;
- (unsigned long long)numPlanes;
- (struct CV3DPlaneDetectionPlane { } *)planeAtIndex:(unsigned long long)a0;

@end
