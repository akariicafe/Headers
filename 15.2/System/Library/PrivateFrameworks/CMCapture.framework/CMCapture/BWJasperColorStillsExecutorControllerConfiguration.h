@class BWVideoFormat;

@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputColorFormat;
@property (retain, nonatomic) BWVideoFormat *outputDepthFormat;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;

- (void)dealloc;

@end
