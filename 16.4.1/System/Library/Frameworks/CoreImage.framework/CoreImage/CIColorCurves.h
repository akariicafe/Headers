@class CIImage, NSData, CIVector;

@interface CIColorCurves : CIFilter {
    CIImage *_curvesImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSData *inputCurvesData;
@property (retain, nonatomic) CIVector *inputCurvesDomain;
@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (id)outputImage;
- (void)dealloc;
- (id)_kernel;
- (BOOL)_checkInputs;
- (id)curvesImage;

@end
