@interface ADReprojection : NSObject {
    struct CGPoint { double x0; double x1; } *_intermediateUndistortedCameraPixels;
    void *_points;
    float *_inOutDepth;
    struct CGPoint { double x0; double x1; } *_srcCameraPixels;
    struct CGPoint { double x0; double x1; } *_dstCameraPixels;
    int *_warpMaskX;
    int *_warpMaskY;
    float *_warpMaskZHelper;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long length;

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)updateCapacity:(unsigned long long)a0;
- (void)deallocateBuffers;
- (int)vectorizeCameraPixels:(struct __CVBuffer { } *)a0 depthUnits:(unsigned long long)a1;
- (void)calculateWarpedPixelsFromSrcCalibration:(id)a0 dstCalibration:(id)a1 poseTransform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a2 validPixels:(unsigned long long)a3;
- (long long)updateWarpWithWarpedDepthBuffer:(struct __CVBuffer { } *)a0 depthUnits:(unsigned long long)a1 dimensions:(struct CGSize { double x0; double x1; })a2 validPixels:(unsigned long long)a3;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { } *)a0 depthUnits:(unsigned long long)a1 srcCalibration:(id)a2 dstCalibration:(id)a3 poseTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 warpedDepth:(struct __CVBuffer { } *)a5;
- (long long)warpImage:(struct __CVBuffer { } *)a0 intoImage:(struct __CVBuffer { } *)a1;

@end
