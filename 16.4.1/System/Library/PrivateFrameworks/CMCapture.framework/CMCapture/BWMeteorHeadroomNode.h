@class NSString, FigMetalContext, NSDictionary, FigMetalHistogram;

@interface BWMeteorHeadroomNode : BWNode {
    NSString *_lastCaptureRequestIdentifier;
    float _lastMeteorHeadroom;
    float _gainMapMainImageDownscalingFactor;
    int _headroomProcessingType;
    FigMetalContext *_metalContext;
    FigMetalHistogram *_histogram;
    NSDictionary *_meteorHeadroomParametersByPortType;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (float)gainMapMainImageDownscalingFactor;
- (void)setHeadroomProcessingType:(int)a0;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1;
- (void)dealloc;
- (int)headroomProcessingType;
- (void)setGainMapMainImageDownscalingFactor:(float)a0;

@end
