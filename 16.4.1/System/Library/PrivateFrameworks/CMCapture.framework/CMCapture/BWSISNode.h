@class NSDictionary, NSArray, FigCaptureStillImageSettings;

@interface BWSISNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_cameraTuningDictionary;
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_noiseModelParamsDictionary;
    NSDictionary *_fusionParamsDictionary;
    int _fusionScheme;
    BOOL _alwaysRequestsPreBracketedEV0;
    BOOL _allowExperimentalOverrides;
    int _lensShadingCorrectionMode;
    int _maxIntegrationTimeLimitMsec;
    float _bracketGainCap;
    NSArray *_exposureValues;
    NSArray *_afWindowParamsArray;
    int _sisBracketCount;
    NSArray *_oisExposureDurationTypes;
    int _oisBracketCount;
    FigCaptureStillImageSettings *_currentCaptureSettings;
    BOOL _preBracketedFrameReceived;
    int _numberFramesReceived;
    int _lastFusionTypeUsed;
    BOOL _livePhotoSupported;
    BOOL _OISSupported;
    BOOL _allowAllocationsAtPrepareTime;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (BOOL)OISSupported;
- (id)initWithCameraTuningDictionary:(id)a0 sensorIDDictionary:(id)a1 fusionScheme:(int)a2;
- (id)_initWithCameraTuningDictionary:(id)a0 sensorIDDictionary:(id)a1 sbpCreationFunction:(void /* function */ *)a2 fusionScheme:(int)a3 allowExperimentalOverrides:(BOOL)a4;
- (BOOL)allowAllocationsAtPrepareTime;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (BOOL)livePhotoSupported;
- (void)setAllowAllocationsAtPrepareTime:(BOOL)a0;
- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)a0;
- (void)setLivePhotoSupported:(BOOL)a0;
- (void)setOISSupported:(BOOL)a0;

@end
