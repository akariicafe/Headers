@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {
    CIImage *_cubeImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputCubeDimension;
@property (copy, nonatomic) NSData *inputCubeData;

+ (id)customAttributes;

- (id)outputImage;
- (id)cubeImage;
- (void)dealloc;
- (id)_kernel;
- (BOOL)_checkInputs;
- (id)_kernelOpaque;

@end
