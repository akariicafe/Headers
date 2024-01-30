@interface CIColorCubeWithColorSpace : CIColorCube

@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (id)outputImage;

@end
