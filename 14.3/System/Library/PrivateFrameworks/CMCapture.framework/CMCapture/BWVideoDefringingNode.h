@class NSString, FigVideoDefringingProcessor, BWLimitedGMErrorLogger;

@interface BWVideoDefringingNode : BWNode {
    BOOL _isSlomo;
    BOOL _propagateSynchronizedSlaveFrame;
    NSString *_sensorIDString;
    NSString *_portType;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSString *_cameraToDefringe;
    FigVideoDefringingProcessor *_videoDefringingProcessor;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (int)_loadAndConfigureVideoDefringingBundle;
- (id)_processorOptions;
- (id)initWithSensorIDString:(id)a0 portType:(id)a1 propagateSynchronizedSlaveFrame:(BOOL)a2 isSlomo:(BOOL)a3;

@end
