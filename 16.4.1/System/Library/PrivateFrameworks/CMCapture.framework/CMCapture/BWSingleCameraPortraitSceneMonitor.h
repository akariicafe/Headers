@class NSString, NSDictionary, BWTrackedFace;

@interface BWSingleCameraPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
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
    float _numFacesDetectedFiltered;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _subjectIsTooClose;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseFocusDistanceHysteresisLag;
    int _subjectTooCloseLastFocusPosition;
    BOOL _subjectTooFarMonitoringEnabled;
    BOOL _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarFocusDistanceHysteresisLag;
    int _subjectTooFarLastFocusPosition;
    BOOL _useAPSFocusDistance;
    BOOL _sceneTooDarkMonitoringEnabled;
    BOOL _sceneIsTooDark;
    int _lastSDOFEffectStatus;
    float _lastFocusDistance;
    BWTrackedFace *_currentlyTrackedFace;
    BOOL _enabled;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    BOOL _stageFaceDetected;
    BOOL _stageFaceHasBeenSeen;
    int _numberOfFramesSinceLastFace;
    int _stageMostRecentFacesCount;
    NSDictionary *_cinematicVideoFocusRequest;
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
