@class CIImage, NSNumber;

@interface CIPerspectiveRotate : CIFilter {
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } K;
    struct float3x3 { void /* unknown type, empty encoding */ columns[3]; } invK;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputFocalLength;
@property (copy, nonatomic) NSNumber *inputPitch;
@property (copy, nonatomic) NSNumber *inputYaw;
@property (copy, nonatomic) NSNumber *inputRoll;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } outputTransform;

+ (id)customAttributes;

- (id)outputImage;
- (void)computeCameraIntrinsics;
- (id).cxx_construct;

@end
