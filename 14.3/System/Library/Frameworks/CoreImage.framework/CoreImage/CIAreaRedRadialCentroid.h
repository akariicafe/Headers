@class CIImage, NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputRadialMode;
@property (retain, nonatomic) NSNumber *inputMinWeight;

+ (id)customAttributes;

- (id)_kernelCenter;
- (id)_kernelDisk;
- (id)_kernelGaussian;
- (id)outputImage;

@end
