@class NSDictionary;

@interface BWNondisruptiveSwitchingFormatSelector : NSObject {
    float _baseZoomFactor;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndex;
    int _videoStabilizationStrength;
    NSDictionary *_quadraSubPixelSwitchingParameters;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnNormalizedSNR;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnLuxLevel;
    BOOL _quadraSubPixelSceneMonitoringForActionCameraEnabled;
    BOOL _quadraSubPixelSceneMonitoringForDigitalFlashEnabled;
    float _lastZoomFactor;
    int _lastDigitalFlashMode;
    BOOL _lastStationary;
    int _lastNondisruptiveSwitchingFormatIndex;
}

+ (void)initialize;

- (void)setVideoStabilizationStrength:(int)a0;
- (void)dealloc;
- (int)formatIndexForZoomFactor:(float)a0 frameStatistics:(id)a1 stillImageDigitalFlashMode:(int)a2 isStationary:(BOOL)a3;
- (id)initWithPortType:(id)a0 sensorIDString:(id)a1 baseZoomFactor:(float)a2 zoomFactorToNondisruptiveSwitchingFormatIndex:(id)a3;

@end
