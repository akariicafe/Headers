@class NSMutableDictionary, BWInferenceResult;

@interface BWVariableFrameRateSelector : NSObject {
    float _suggestedFrameRate;
    int _mode;
    float _integrationTimeFrom60To30;
    float _integrationTimeFrom30To24;
    float _integrationTimeFrom30BackTo60;
    NSMutableDictionary *_vfrAEMaxGainsByPortType;
    NSMutableDictionary *_variableFrameRateInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _variableFrameRateInfoLock;
    int _frameRateConversionStatus;
    BOOL _lastStabilityFlag;
    BOOL _deviceMotionEnabled;
    BOOL _sceneMotionEnabled;
    BOOL _zoomInProgress;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _sceneMotionAEInLowLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _sceneMotionAEInHighLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _deviceMotionInLowLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _deviceMotionInHighLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _aeLimits;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _zoomRequest;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _flickerDetected;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _waterSceneDetected;
    float _previousEITForAELimitsReached;
    int _globalMotionAE;
    NSMutableDictionary *_highLightSceneMotionThresholdsByPortType;
    NSMutableDictionary *_lowLightSceneMotionThresholdsByPortType;
    struct { double w; double x; double y; double z; } _lastQuaternion;
    struct { double w; double x; double y; double z; } _lastQuaternionDiff;
    BOOL _testRun;
    BOOL _frameRateConversionInVISNodeEnabled;
    BWInferenceResult *_mostRecentInferenceResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _smartCameraLock;
    struct { int reason; int mode; float fromFR; float toFR; struct { long long value; int timescale; unsigned int flags; long long epoch; } time; BOOL isSceneStable; BOOL aeLimitsReached; BOOL waterSceneDetected; int currentFrameRate; } _state;
}

@property (readonly, nonatomic) float suggestedFrameRate;

+ (void)initialize;

- (void)dealloc;
- (void)addAttachmentsToSamplebuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (float)getAEMaxGainForPortType:(id)a0 suggestedFrameRate:(double)a1;
- (id)initWithPortTypes:(id)a0 forParameters:(id)a1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatistics:(id)a1 currentFrameRate:(float)a2 aeMaxGain:(float)a3 zoomInProgress:(BOOL)a4 mostRecentInferenceResult:(id)a5;

@end
