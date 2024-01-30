@class CIImage, NSNumber;

@interface RedEyeChannel : CIFilter {
    CIImage *inputImage;
    NSNumber *inputChannel;
    NSNumber *inputParam1;
    NSNumber *inputParam2;
    NSNumber *inputParam3;
    NSNumber *inputParam4;
}

- (id)outputImage;
- (id)filterNameForChannel:(int)a0;
- (id)parameterNamesForChannel:(int)a0;

@end
