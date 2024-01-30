@class NSDictionary, BWVideoFormat;

@interface BWDeepZoomProcessorControllerConfiguration : BWStillImageProcessorConfiguration {
    NSDictionary *_deepZoomParametersByPortType;
}

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (retain, nonatomic) BWVideoFormat *outputFormat;
@property (nonatomic) int version;

- (void)dealloc;
- (void)setSensorConfigurations:(id)a0;
- (BOOL)doDeepZoomForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (float)minScaleFactorForPortType:(id)a0;
- (float)maxScaleFactorForPortType:(id)a0;

@end
