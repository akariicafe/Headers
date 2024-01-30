@class NSMutableDictionary;

@interface BWVariableFrameRateSelector : NSObject {
    float _suggestedFrameRate;
    int _mode;
    float _integrationTimeFrom60To30;
    float _integrationTimeFrom30To24;
    float _integrationTimeFrom30BackTo60;
    NSMutableDictionary *_vfrAEMaxGainsByPortType;
    NSMutableDictionary *_variableFrameRateInfo;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPTSForVariableFrameRateInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _variableFrameRateInfoLock;
    int _frameRateConversionStatus;
    BOOL _lastStabilityFlag;
    BOOL _deviceMotionEnabled;
    BOOL _sceneMotionEnabled;
    BOOL _zoomInProgress;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _sceneMotionAEInLowLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _sceneMotionAEInHighLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _deviceMotionInLowLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _deviceMotionInHighLight;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _aeLimits;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _zoomRequest;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; char confidenceHysteresisTemporalLagBeforeConfident; char confidenceHysteresisTemporalLagBeforeNotConfident; char currentTemporalHysteresis; char *name; } _flickerDetected;
    float _previousEITForAELimitsReached;
    int _globalMotionAE;
    NSMutableDictionary *_highLightSceneMotionThresholdsByPortType;
    NSMutableDictionary *_lowLightSceneMotionThresholdsByPortType;
    struct { double w; double x; double y; double z; } _lastQuaternion;
    struct { double w; double x; double y; double z; } _lastQuaternionDiff;
    BOOL _testRun;
    BOOL _frameRateConversionInVISNodeEnabled;
    struct { int reason; int mode; float fromFR; float toFR; struct { long long value; int timescale; unsigned int flags; long long epoch; } time; BOOL isSceneStable; BOOL aeLimitsReached; int currentFrameRate; } _state;
}

@property (readonly, nonatomic) float suggestedFrameRate;

+ (void)initialize;

- (void)dealloc;
- (void)_loadDefaultsWithPortTypes:(id)a0 forParameters:(id)a1;
- (BOOL)_zoomRequestConfidenceFromCurrentZoomInProgress:(BOOL)a0;
- (void)_updateSuggestedFrameRateFromFrameStatistics:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 currentFrameRate:(float)a2 aeMaxGain:(float)a3;
- (void)_updateAEMaxGainDictionary:(id)a0 withAEMaxGain:(id)a1 forPortType:(id)a2;
- (void)_updatemotionThreshold:(int)a0 forPortType:(id)a1;
- (BOOL)_flickerDetectedConfidenceFromCurrentLightMode:(BOOL)a0;
- (float)getAEMaxGainForPortType:(id)a0 suggestedFrameRate:(double)a1;
- (void)_updateMotionDataFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateSmartSceneFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 currentFrameRate:(float)a1 portType:(id)a2;
- (BOOL)_getSceneStabilityFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 currentFrameRate:(float)a1 portType:(id)a2;
- (BOOL)_aeLimitsConfidenceFromCurrentFrameStatistics:(id)a0;
- (id)initWithPortTypes:(id)a0 forParameters:(id)a1;
- (float)_frameRateForFrameStatistics:(id)a0 portType:(id)a1;
- (void)_updateStateWithFramerate:(float)a0 reason:(int)a1 currentFramerate:(float)a2;
- (BOOL)_switchBackTo60AsFlickerFrequencyIsDetected:(id)a0;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatistics:(id)a1 currentFrameRate:(float)a2 aeMaxGain:(float)a3 zoomInProgress:(BOOL)a4;

@end
