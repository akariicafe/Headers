@class CIImage, CIVector, NSNumber;

@interface CIRAWTemperatureAdjust : CIFilter {
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputEV;
    NSNumber *inputVersion;
}

- (id)outputImage;

@end
