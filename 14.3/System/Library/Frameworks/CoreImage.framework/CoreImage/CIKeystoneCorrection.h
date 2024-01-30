@class CIVector, CIFilter, CIImage, NSNumber;

@interface CIKeystoneCorrection : CIFilter {
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } K;
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } invK;
    float pitch;
    float yaw;
    float roll;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputFocalLength;
@property (copy, nonatomic) CIVector *inputTopLeft;
@property (copy, nonatomic) CIVector *inputTopRight;
@property (copy, nonatomic) CIVector *inputBottomRight;
@property (copy, nonatomic) CIVector *inputBottomLeft;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } outputTransform;
@property (readonly, nonatomic) CIFilter *outputRotationFilter;

+ (id)customAttributes;

- (id).cxx_construct;
- (void)computeCameraIntrinsics;
- (void)computeRotation;
- (id)outputImage;

@end
