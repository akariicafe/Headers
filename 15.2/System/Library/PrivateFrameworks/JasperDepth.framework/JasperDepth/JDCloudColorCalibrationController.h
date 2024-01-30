@interface JDCloudColorCalibrationController : NSObject

@property (nonatomic) unsigned int numberOfValidSpotsForValidFrame;
@property (nonatomic) float thresholdDepthValue;
@property (nonatomic) float thresholdConfidenceValue;
@property (nonatomic) float thresholdPrecOfValidSpot;
@property (nonatomic) float allowedFrameCropWidthThreshold;
@property (nonatomic) float allowedFrameCropHeightThreshold;
@property (nonatomic) float sensorHeightFromWidthAnd4By3RatioAssumption;
@property (nonatomic) float allowedDriftFromSymmetricCrop;
@property (nonatomic) float allowedFrameRatio;
@property (nonatomic) float allowedFrameRatioThreshold;
@property (nonatomic) BOOL debugOutputEnabled;

- (id)init;
- (BOOL)isFrameValidForCalibration:(struct __CVBuffer { } *)a0 imageMetadata:(id)a1 pointCloud:(id)a2;
- (BOOL)controllerLogic:(struct __CVBuffer { } *)a0 jdpc:(id)a1 rate:(unsigned int)a2;
- (BOOL)isJasperFrameValid:(id)a0;
- (BOOL)is:(double)a0 around:(double)a1 withPercentage:(float)a2;
- (BOOL)is:(double)a0 distanceFromSymmetricCroppingPoint:(double)a1 normalizedBySensorDimention:(double)a2;
- (BOOL)isInSupportedFormat:(struct __CVBuffer { } *)a0;
- (BOOL)isPixBufFrameValid:(struct __CVBuffer { } *)a0 withMetadata:(id)a1;
- (void)rgbj_controller_log:(id)a0 isErrorMessage:(BOOL)a1;

@end
