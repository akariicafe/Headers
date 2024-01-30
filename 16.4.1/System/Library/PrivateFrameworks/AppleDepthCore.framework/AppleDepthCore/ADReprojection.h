@interface ADReprojection : NSObject {
    struct CGPoint { double x0; double x1; } *_intermediateUndistortedCameraPixels;
    void *_points;
    float *_inOutDepth;
    struct CGPoint { double x0; double x1; } *_srcCameraPixels;
    struct CGPoint { double x0; double x1; } *_dstCameraPixels;
    int *_warpMaskX;
    int *_warpMaskY;
    float *_warpMaskZHelper;
    BOOL _singlePassOptimizationUsed;
    struct __CVBuffer { } *_warpMap;
}

@property (nonatomic) BOOL singlePassReprojectionAllowed;
@property (nonatomic) BOOL fullPassReprojectionAllowed;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long streakingInfill;

- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { } *)a0 srcCalibration:(id)a1 dstCalibration:(id)a2 sourceToDestinationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 warpedDepth:(struct __CVBuffer { } *)a4;
- (long long)warpImage:(struct __CVBuffer { } *)a0 intoImage:(struct __CVBuffer { } *)a1;
- (BOOL)updateCapacity:(unsigned long long)a0;
- (void)calculateWarpedPixelsFromSrcCalibration:(id)a0 dstCalibration:(id)a1 sourceToDestinationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a2 validPixels:(unsigned long long)a3;
- (void)deallocateBuffers;
- (id)initWithCapacity:(unsigned long long)a0 streakingInfill:(unsigned long long)a1;
- (id)initWithStreakingInfill:(unsigned long long)a0;
- (BOOL)isCalibrationUndistorted:(id)a0;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { } *)a0 srcCalibration:(id)a1 dstCalibration:(id)a2 poseTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 warpedDepth:(struct __CVBuffer { } *)a4;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { } *)a0 srcDepthUnits:(unsigned long long)a1 dstDepthUnits:(unsigned long long)a2 srcCalibration:(id)a3 dstCalibration:(id)a4 poseTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 warpedDepth:(struct __CVBuffer { } *)a6;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { } *)a0 srcDepthUnits:(unsigned long long)a1 dstDepthUnits:(unsigned long long)a2 srcCalibration:(id)a3 dstCalibration:(id)a4 sourceToDestinationTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 warpedDepth:(struct __CVBuffer { } *)a6;
- (long long)updateWarpWithWarpedDepthBuffer:(struct __CVBuffer { } *)a0 dimensions:(struct CGSize { double x0; double x1; })a1 validPixels:(unsigned long long)a2;
- (int)vectorizeCameraPixels:(struct __CVBuffer { } *)a0;

@end
