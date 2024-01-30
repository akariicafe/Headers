@class CIImage, CIVector, NSNumber;

@interface HistoClip_RGBA8_CPU : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputCenterLeft;
@property (retain, nonatomic) CIImage *inputCenterRight;
@property (retain, nonatomic) CIVector *inputCenterExtentLeft;
@property (retain, nonatomic) CIVector *inputCenterExtentRight;
@property (retain, nonatomic) NSNumber *inputPercentileRepair;
@property (retain, nonatomic) NSNumber *inputPercentileSpecular;
@property (retain, nonatomic) NSNumber *inputPercentRepair;
@property (retain, nonatomic) NSNumber *inputPercentSpecular;
@property (retain, nonatomic) NSNumber *inputInterPeakMinRepair;
@property (retain, nonatomic) NSNumber *inputAbortMaxCenterDist;
@property (retain, nonatomic) NSNumber *inputMinDensity;
@property (retain, nonatomic) NSNumber *inputMaxRelDensity;
@property (retain, nonatomic) NSNumber *inputDensityRadius;
@property (retain, nonatomic) NSNumber *inputMinInterDispersion;
@property (retain, nonatomic) NSNumber *inputMaxInterDispersion;
@property (retain, nonatomic) NSNumber *inputMinGobalLocalMeanDiff;
@property (retain, nonatomic) CIVector *inputMinimum;
@property (retain, nonatomic) CIVector *inputMaxArea;
@property (retain, nonatomic) CIVector *inputMaxAreaRatio;
@property (retain, nonatomic) CIVector *inputCenterOffsetLeft;
@property (retain, nonatomic) CIVector *inputCenterOffsetRight;
@property (retain, nonatomic) CIImage *inputDetectionLeft;
@property (retain, nonatomic) CIImage *inputDetectionRight;
@property (retain, nonatomic) NSNumber *inputTuning;

- (id)outputImage;

@end
