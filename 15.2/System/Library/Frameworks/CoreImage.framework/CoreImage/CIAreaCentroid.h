@interface CIAreaCentroid : CIReductionFilter

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelWeightedCoordinate;
- (id)_kernelCentroid;

@end
