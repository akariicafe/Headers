@class NSString, NSArray;

@interface BWBravoPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    float _backgroundShiftSumFiltered;
    float _invalidShiftRatioFiltered;
    BOOL _oneShotFocusScanInProgress;
    BOOL _focusLocked;
    int _numFramesSinceFocusLocked;
    BOOL _focusStableAfterStartStreaming;
    BOOL _focusAdjusting;
    int _lastFocusingMethod;
    int _numFramesSinceFocusBecameStable;
    BOOL _aeStableAfterStartStreaming;
    int _numFramesSinceAEBecameStable;
    BOOL _useLensMakersFocusDistance;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _subjectIsTooClose;
    float _subjectTooCloseWideFocusDistanceThreshold;
    float _subjectTooCloseWideFocusDistanceHysteresisLag;
    int _subjectTooCloseLastWideFocusPosition;
    BOOL _subjectTooFarMonitoringEnabled;
    BOOL _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarFocusDistanceHysteresisLag;
    float _subjectTooFarFocusDistanceInfinityThreshold;
    BOOL _subjectTooFarUseTeleForFocusDistance;
    BOOL _subjectTooFarBackgroundShiftSumIsTooLow;
    int _subjectTooFarBackgroundShiftTooLowNumFrames;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    int _subjectTooFarLastTeleFocusPosition;
    BOOL _sceneTooDarkMonitoringEnabled;
    BOOL _sceneIsTooDark;
    BOOL _sceneTooDarkExposureThresholdReached;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkGainHysteresisLag;
    float _sceneTooDarkInvalidShiftRatioThreshold;
    float _sceneTooDarkInvalidShiftRatioHysteresisLag;
    BOOL _stageFaceMonitoringEnabled;
    BOOL _stageFaceDetected;
    int _stageFaceNumberOfFramesSinceLastFace;
    BOOL _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    float _stageTooFarFocusDistanceThreshold;
    BOOL _stageSubjectTooFarDistanceThresholdReached;
    int _stageTooFarBackgroundShiftTooLowNumFrames;
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
