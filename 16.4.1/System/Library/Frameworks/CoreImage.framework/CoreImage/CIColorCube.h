@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {
    CIImage *_cubeImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCubeData;
@property (copy, nonatomic) NSNumber *inputExtrapolate;

+ (id)customAttributes;

- (id)outputImage;
- (void)dealloc;
- (id)_kernel;
- (BOOL)_checkInputs;
- (id)_kernelOpaque;
- (id)_kernelOpaqueExtend;
- (id)cubeImage;

@end
