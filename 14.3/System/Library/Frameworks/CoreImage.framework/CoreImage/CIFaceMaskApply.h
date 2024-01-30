@class CIVector, NSDictionary, CIImage, NSNumber;

@interface CIFaceMaskApply : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputParameterImage;
@property (copy, nonatomic) CIVector *inputFacesCenterX;
@property (copy, nonatomic) CIVector *inputFacesCenterY;
@property (copy, nonatomic) CIVector *inputFacesChinX;
@property (copy, nonatomic) CIVector *inputFacesChinY;
@property (copy, nonatomic) CIVector *inputK0;
@property (copy, nonatomic) CIVector *inputK1;
@property (copy, nonatomic) CIVector *inputK2;
@property (copy, nonatomic) CIVector *inputK3;
@property (copy, nonatomic) NSNumber *inputK4;
@property (copy, nonatomic) NSDictionary *inputTuningParameters;

+ (id)_kernel;

- (id)outputImage;

@end
