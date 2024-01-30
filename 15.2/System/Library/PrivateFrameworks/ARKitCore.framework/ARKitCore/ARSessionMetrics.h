@class NSArray, ARConfiguration, NSDate, CLLocation;
@protocol ARSessionMetricsReporting;

@interface ARSessionMetrics : NSObject {
    id<ARSessionMetricsReporting> _reporter;
    BOOL _isAutoFocusEnabled;
    BOOL _sessionWasThrottled;
    float _timeUntilThrottling;
    float _badFramePercentage10;
    float _badFramePercentage60;
    float _badFramePercentageMoreThan60;
    Class _configClass;
    ARConfiguration *_currentConfiguration;
    NSDate *_startDate;
    NSDate *_frameStartDate;
    double _sessionTimeForLastBadFrameRecording;
    BOOL _initializingVIO;
    unsigned long long _frameCount;
    unsigned long long _badFrameCount;
    double _vioInitializationTime;
    BOOL _positionInitialized;
    void /* unknown type, empty encoding */ _minPos;
    void /* unknown type, empty encoding */ _maxPos;
    NSArray *_lastUpdatedFrameAnchors;
    CLLocation *_lastUpdatedFrameLocation;
    unsigned long long _currentVIOMapSize;
    unsigned long long _numberOfCameraSwitches;
    unsigned long long _numberOfReinitializationAttempts;
    BOOL _hasInitialWorldMap;
    BOOL _relocalizingToInitialWorldMap;
    BOOL _sessionDidFailWithError;
    unsigned long long _raycastCount;
    long long _coachingOverlayGoal;
    unsigned long long _coachingOverlayActivationCount;
    BOOL _geoTrackingLocalized;
    double _geoTrackingInitializationTime;
    double _geoTrackingLocalizationTime;
    unsigned long long _geoTrackingLowAccuracyFrameCount;
    unsigned long long _geoTrackingMediumAccuracyFrameCount;
    unsigned long long _geoTrackingHighAccuracyFrameCount;
    unsigned long long _geoTrackingLocalizationCount;
    long long _geoTrackingFailureReason;
}

+ (void)setRenderType:(unsigned long long)a0;
+ (id)getRenderEngineString:(id)a0;
+ (void)recordHitTest:(unsigned long long)a0;
+ (void)recordReplayMetrics:(id)a0;
+ (void)recordAltitudeLookupAttemptWithDuration:(double)a0 andResult:(id)a1;

- (void)sessionStopped;
- (void)sessionStarted:(id)a0 withConfiguration:(id)a1;
- (void)_recordBadFramePercentageFinal:(BOOL)a0;
- (void)recordSaveMap:(long long)a0 numberOfFeaturePoints:(unsigned long long)a1;
- (id)initWithReporter:(id)a0;
- (void)recordRaycast:(id)a0 tracked:(BOOL)a1;
- (void)sessionDidUpdateFrame:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_recordSessionEnd;
- (void)sessionUpdateThermalState:(long long)a0;
- (void)reportSessionFailure:(id)a0;
- (void)recordCoachingOverlayUsage:(int)a0;
- (id)queue;

@end
