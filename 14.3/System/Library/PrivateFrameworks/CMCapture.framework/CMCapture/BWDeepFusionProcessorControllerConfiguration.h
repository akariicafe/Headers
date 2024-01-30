@class NSDictionary, BWVideoFormat;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (nonatomic) BOOL semanticRenderingEnabled;
@property (nonatomic) int stillImageFusionScheme;
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType;
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;

- (void)dealloc;

@end
