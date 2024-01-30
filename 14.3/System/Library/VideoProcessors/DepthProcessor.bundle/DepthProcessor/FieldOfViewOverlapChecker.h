@interface FieldOfViewOverlapChecker : NSObject {
    struct { int width; int height; } _infraredCameraIntrinsicMatrixReferenceDimensions;
    struct { int width; int height; } _rgbCameraIntrinsicMatrixReferenceDimensions;
    struct { void /* unknown type, empty encoding */ columns[4]; } _extrinsicMatrixFromInfraredToRGBCamera;
    float _infraredCameraPixelSizeInMillimeter;
    float _rgbCameraPixelSizeInMillimeter;
    float _infraredCameraFocalLengthInMillimeter;
    float _rgbCameraFocalLengthInMillimeter;
    void /* unknown type, empty encoding */ _infraredCameraOpticalCenterPixel;
    void /* unknown type, empty encoding */ _rgbCameraOpticalCenterPixel;
    float _virtualZinMillimeter;
}

- (float)_upscaleUinVGAToFullRGB:(int)a0;
- (float)_downscaleVfromFullRGBtoVGA:(float)a0;
- (float)_upscaleVinVGAToFullRGB:(int)a0;
- (float)_downscaleUfromFullRGBtoVGA:(float)a0;
- (int)_getPixelCoordinateOfLineBetween:(int)a0 And:(int)a1 inside:(void *)a2 At:(int)a3;
- (void)_resetExpectedDepthCoordianteLimitsIn:(struct { float x0; float x1; float x2; int x3[640]; int x4[640]; int x5[480]; int x6[480]; } *)a0;
- (id)initWithInfraredCameraIntrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 infraredCameraIntrinsicMatrixReferenceDimensions:(struct { int x0; int x1; } *)a1 infraredCameraPixelSizeInMicrons:(float)a2 rgbCameraIntrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a3 rgbCameraIntrinsicMatrixReferenceDimensions:(struct { int x0; int x1; } *)a4 rgbCameraPixelSizeInMicrons:(float)a5 extrinsicMatrixFromInfraredToRGBCamera:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a6;
- (int)_pixelToPixelTransformFromIR:(SEL)a0 toRGB:(void *)a1;
- (int)_setCutoffCoordinatesIn:(struct { float x0; float x1; float x2; int x3[640]; int x4[640]; int x5[480]; int x6[480]; } *)a0 withIrCornersInRgbUVPixels:(void *)a1;
- (int)setExpectedDepthCoordianteLimitsIn:(struct { float x0; float x1; float x2; int x3[640]; int x4[640]; int x5[480]; int x6[480]; } *)a0;

@end
