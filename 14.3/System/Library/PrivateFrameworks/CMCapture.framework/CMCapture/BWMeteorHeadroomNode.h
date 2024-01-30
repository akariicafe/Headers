@class NSString, FigMetalContext, NSDictionary, FigMetalHistogram;
@protocol MTLCommandQueue;

@interface BWMeteorHeadroomNode : BWNode {
    NSString *_lastCaptureRequestIdentifier;
    float _lastMeteorHeadroom;
    float _gainMapMainImageDownscalingFactor;
    int _headroomProcessingType;
    FigMetalContext *_metalContext;
    id<MTLCommandQueue> _metalCommandQueue;
    FigMetalHistogram *_histogram;
    NSDictionary *_meteorHeadroomParametersByPortType;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setGainMapMainImageDownscalingFactor:(float)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1;
- (void)setHeadroomProcessingType:(int)a0;
- (int)headroomProcessingType;
- (float)gainMapMainImageDownscalingFactor;

@end
