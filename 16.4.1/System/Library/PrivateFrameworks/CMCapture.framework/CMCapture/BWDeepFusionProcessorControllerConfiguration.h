@class NSDictionary;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) struct { int width; int height; } maxInputDimensions;
@property (nonatomic) struct { int width; int height; } maxOutputDimensions;
@property (nonatomic) BOOL quadraSupportEnabled;
@property (nonatomic) int stillImageFusionScheme;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) BOOL delayPrepareAndCacheBuffers;

- (void)dealloc;

@end
