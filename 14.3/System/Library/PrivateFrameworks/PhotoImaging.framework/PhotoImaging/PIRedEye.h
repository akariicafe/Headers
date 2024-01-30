@class CIImage, NSArray, NSString;

@interface PIRedEye : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDestinationImage;
@property (retain, nonatomic) NSArray *inputCorrectionInfo;
@property (retain, nonatomic) NSString *inputCameraModel;

- (void).cxx_destruct;
- (id)outputImage;

@end
