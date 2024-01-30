@class NSString, NSArray;

@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {
    int _numberOfFramesWithStableFocusThreshold;
    BOOL _oneShotFocusScanInProgress;
    BOOL _focusLocked;
    int _numFramesSinceFocusLocked;
    int _numFramesSinceFocusBecameStable;
    BOOL _focusHasBeenAttainedAfterStart;
    int _numFramesSinceFocusFirstAttainedStability;
    BOOL _focusIsStationaryBeyondThreshold;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _subjectTooCloseMonitoringForcingWideLens;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseHysteresis;
    BOOL _subjectIsTooClose;
    BOOL _subjectTooClosePreviousFrame;
    BOOL _subjectTooFarMonitoringEnabled;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    BOOL _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarDistanceThresholdHysteresis;
    BOOL _backgroundShiftSumTooLowThresholdReached;
    float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
    float _jasperDistanceAtFocus;
    BOOL _subjectIsTooFarDigitalFlash;
    BOOL _subjectIsTooFarForStageDigitalFlash;
    float _subjectTooFarDigitalFlashThreshold;
    float _stageTooFarDigitalFlashThreshold;
    float _sceneTooDarkGainThresholdHard;
    float _jasperDistanceAtFocusSmoothingFactor;
    BOOL _subjectIsTooFar;
    BOOL _subjectIsTooFarForStage;
    BOOL _subjectIsTooFarForStageNoFaces;
    BOOL _deliveryOfShiftsHasStarted;
    float _backgroundShiftSumSmoothed;
    float _backgroundShiftSumSmoothingTrend;
    float _backgroundShiftSumSmoothingFactor;
    float _backgroundShiftSumSmoothingTrendUpdateFactor;
    float _invalidShiftRatioSmoothed;
    float _invalidShiftRatioSmoothingFactor;
    BOOL _sceneTooDarkMonitoringEnabled;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
    BOOL _sceneIsTooDark;
    BOOL _stageFaceMonitoringEnabled;
    int _stageFaceNumberOfFramesSinceLastFace;
    BOOL _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    BOOL _stageTooFarMonitoringEnabled;
    float _stageTooFarFocusDistanceThreshold;
    BOOL _stageTooFarDistanceThresholdReached;
    float _stageTooFarDistanceThresholdHysteresis;
    BOOL _stageBackgroundShiftSumTooLowThresholdReached;
    float _stageTooFarBackgroundShiftSumTooLowThreshold;
    float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
    BOOL _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float _stageTooFarBackgroundShiftSumNoFacesThreshold;
    int _lastSDOFEffectStatus;
}

@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)a0 attachDebugFrameStatistics:(BOOL)a1;
- (BOOL)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatisticsByPortType:(id)a1 sceneFlags:(unsigned long long)a2 flashOrTorchWillBeActive:(BOOL)a3 digitalFlashWillFire:(BOOL)a4 effectStatus:(int *)a5 stagePreviewStatus:(int *)a6;
- (void)setAutoFocusInProgress:(BOOL)a0 focusLocked:(BOOL)a1 oneShotFocusScanInProgress:(BOOL)a2;
- (void)setSDOFBackgroundShiftSum:(float)a0 invalidShiftRatio:(float)a1 closeCanonicalDisparityAverage:(float)a2 faceCanonicalDisparityAverages:(id)a3 erodedForegroundRatio:(float)a4 foregroundRatio:(float)a5 occluded:(BOOL)a6 faces:(id)a7;

@end
