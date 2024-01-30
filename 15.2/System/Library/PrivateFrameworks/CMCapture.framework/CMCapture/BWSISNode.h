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

- (void)setAlwaysRequestsPreBracketedEV0:(BOOL)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)_initWithCameraTuningDictionary:(id)a0 sensorIDDictionary:(id)a1 sbpCreationFunction:(void /* function */ *)a2 fusionScheme:(int)a3 allowExperimentalOverrides:(BOOL)a4;
- (void)_clearCaptureRequestState;
- (id)nodeSubType;
- (int)_setupSampleBufferProcessor;
- (void)setLivePhotoSupported:(BOOL)a0;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (id)nodeType;
- (int)_unpackSISOptions;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)initWithCameraTuningDictionary:(id)a0 sensorIDDictionary:(id)a1 fusionScheme:(int)a2;
- (BOOL)livePhotoSupported;
- (void)_sampleBufferProcessorOutputReady:(int)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)alwaysRequestsPreBracketedEV0;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (BOOL)allowAllocationsAtPrepareTime;
- (BOOL)OISSupported;
- (void)setAllowAllocationsAtPrepareTime:(BOOL)a0;
- (void)dealloc;
- (void)setOISSupported:(BOOL)a0;

@end
