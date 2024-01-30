@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {
    CIImage *_cubeImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCubeData;

+ (id)customAttributes;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (id)cubeImage;
- (BOOL)_checkInputs;
- (id)_kernelOpaque;

@end
