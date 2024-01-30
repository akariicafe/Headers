@class CIImage, NSNumber, AVCameraCalibrationData;

@interface CICameraCalibrationLensCorrection : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) AVCameraCalibrationData *inputAVCameraCalibrationData;
@property (retain, nonatomic) NSNumber *inputUseInverseLookUpTable;

+ (id)customAttributes;

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (struct CGPoint { double x0; double x1; })ReferenceensDistortionPointForPoint:(struct CGPoint { double x0; double x1; })a0 lookupTable:(id)a1 distortionOpticalCenter:(struct CGPoint { double x0; double x1; })a2 imageSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end
