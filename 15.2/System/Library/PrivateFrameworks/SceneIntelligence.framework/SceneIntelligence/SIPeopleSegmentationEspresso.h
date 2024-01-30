@class SIScaler;

@interface SIPeopleSegmentationEspresso : SIBaseNetwork <SIPeopleSegmentationModelProtocol> {
    SIScaler *_scalerOne;
    long long _configuration;
    struct __CVBuffer { } *_temporalBuffer;
    int _frameCount;
}

+ (struct CGSize { double x0; double x1; })getOutputResolution;
+ (struct CGSize { double x0; double x1; })getInputResolution;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithComputeEngine:(long long)a0 andNetworkConfiguration:(long long)a1;
- (id)_configurationToString:(long long)a0;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (long long)getConfiguration;
- (id)initWithComputeEngine:(long long)a0;
- (void)preSetup;
- (BOOL)switchNetworkConfiguration:(long long)a0;
- (void)postSetup;
- (long long)evaluateSemanticsForImage:(struct __CVBuffer { } *)a0 andOutputSurface:(struct __IOSurface { } *)a1;
- (void)initMLVariables;
- (void)copyResultsToOtherBuffers:(struct __IOSurface { } *)a0;

@end
