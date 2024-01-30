@class CIImage, NSString, NSDictionary;

@interface CIRedEyeCorrection : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSString *inputCameraModel;
@property (copy, nonatomic) NSDictionary *inputCorrectionInfo;

- (void)setDefaults;
- (id)outputImage;
- (BOOL)_isIdentity;

@end
