@class ARPointCloud;

@interface ARKeyFrame : NSObject

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) ARPointCloud *featurePoints;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKeyframeData:(struct { double x0[9]; double x1[3]; double x2[9]; unsigned long long x3; unsigned int *x4; } *)a0 featurePoints:(id)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

@end
