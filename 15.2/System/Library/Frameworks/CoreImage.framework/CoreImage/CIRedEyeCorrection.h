@class CIImage, NSString, NSDictionary;

@interface CIRedEyeCorrection : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSString *inputCameraModel;
@property (copy, nonatomic) NSDictionary *inputCorrectionInfo;

- (id)outputImage;
- (void)setDefaults;
- (BOOL)_isIdentity;

@end
