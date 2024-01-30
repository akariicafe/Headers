@class NSArray, BWFigVideoCaptureStream, NSString;

@interface BWBravoStreamSelector : NSObject {
    BWFigVideoCaptureStream *_wideStream;
    BWFigVideoCaptureStream *_teleStream;
    BWFigVideoCaptureStream *_superWideStream;
    float _teleMaxAEGain;
    float _teleAEGainHysteresisLag;
    BOOL _teleAEHysteresisUseEIT;
    float _teleMaxEIT;
    float _teleMinTeleToWideEITThresholdPercentage;
    float _teleMaxTeleToWideEITThresholdPercentage;
    float _teleToWideFocusDistance;
    float _wideToTeleFocusDistance;
    int _teleMaxSubsequentFramesAtMaxGain;
    int _teleMaxSubsequentFramesAtMaxEIT;
    float _superWideMaximumAETargetOffset;
    float _superWideMaximumAETargetOffsetHysteresisLag;
    int _superWideToWideNumberOfConsecutiveFramesWithMaximumAETargetOffset;
    int _superWideToWideNumberOfConsecutiveFramesWithMaximumAETargetOffsetThreshold;
    double _digitalFlashMinTeleToWideEITThreshold;
    double _digitalFlashMaxTeleToWideEITThreshold;
    double _digitalFlashMinTeleToWideEITThresholdWithHumansPresent;
    double _digitalFlashMaxTeleToWideEITThresholdWithHumansPresent;
    int _digitalFlashTeleToWideNumberOfConsecutiveFramesWithHumanPresentThreshold;
    BOOL _digitalFlashAdjustEITForTargetOffsetAndBias;
    BWFigVideoCaptureStream *_currentMasterStream;
    BWFigVideoCaptureStream *_recommendedMasterStream;
    struct { long long selectionBehavior; unsigned long long restrictedSelectionConditions; } _selectionConfiguration;
    struct { long long selectionBehavior; unsigned long long restrictedSelectionConditions; } _pendingSelectionConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingSelectionConfigurationLock;
    NSArray *_lastPotentialMasterStreams;
    NSArray *_lastEligibleFallbackPortTypes;
    BOOL _allowSwitchesWithFineMovement;
    float _previousZoomFactor;
    long long _timeOfLastZoomFactorChange;
    long long _timeOfLastPortTypeMadeEligibleByZoom;
    NSString *_lastPortTypeMadeEligibleByZoom;
    long long _timeOfLastFocusModeChange;
    long long _timeOfLastExposureModeChange;
    BOOL _waitingForSlaveFocusAfterZoomChange;
    int _teleMaxGainReachedCounter;
    int _teleMaxEITReachedCounter;
    int _numberOfConsecutiveFramesWithHumans;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _eligibleFallbackPortTypesLock;
    NSArray *_eligibleFallbackPortTypes;
    NSArray *_supportedFallbackPortTypes;
    float _minLuxLevelChangeForSceneChange;
    double _digitalFlashMinEITPercentageChangeForSceneChange;
    float _minFocusDistanceChangeForSceneChange;
    BOOL _resetSceneChangeMonitoring;
    BOOL _sceneChangeDetected;
    int _initialLuxLevel;
    double _initialEIT;
    float _initialFocusDistance;
    BOOL _superWideWaitForStableFocusOnce;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _superWideFirstFrameReceivedTime;
    int _lastSuperWideLogicalLensFocusPosition;
    BOOL _superWideLogicalLensFocusPositionChangedOnce;
    unsigned int _superWideLogicalLensFocusPositionChangedTimeoutInMilliSeconds;
    BOOL _superWideFocusIsStableOnce;
    float _exposureRangeLowForRecommendedMasterSwitch;
    float _exposureRangeHighForRecommendedMasterSwitch;
}

@property (readonly, nonatomic, getter=isLensMakersFocusDistanceRequired) BOOL lensMakersFocusDistanceRequired;
@property (readonly, nonatomic) BOOL superWideAutoSwitchingSupported;
@property (readonly, nonatomic) float wideToSuperWideFocusDistance;
@property (readonly, nonatomic) float superWideToWideFocusDistance;
@property (nonatomic) float teleMaxAEGain;
@property (nonatomic) float teleMaxEIT;
@property (nonatomic) struct { long long x0; unsigned long long x1; } selectionConfiguration;
@property (copy, nonatomic) NSArray *eligibleFallbackPortTypes;
@property (readonly, nonatomic) BWFigVideoCaptureStream *slaveStreamBlockingFocusAndExposureStability;
@property (readonly, nonatomic) BWFigVideoCaptureStream *preferredMasterStreamIgnoringEligibleFallbackPortTypes;
@property (readonly, nonatomic) int lastSelectionReason;

+ (void)initialize;

- (id)recommendMasterStreamUsingCurrentMasterStream:(id)a0 frameStatisticsByPortType:(id)a1 zoomFactor:(float)a2 digitalFlashMode:(int)a3 detectedObjects:(id)a4 cameraControlsStatisticsMasterStream:(id)a5;
- (void)focusModeDidChange;
- (void)exposureModeDidChange;
- (void)resetWithZoomFactor:(float)a0 currentMasterStream:(id)a1;
- (void)dealloc;
- (id)initWithStreamSelectionAttributes:(id)a0 wideStream:(id)a1 teleStream:(id)a2 superWideStream:(id)a3 cameraCalibrationValid:(BOOL)a4;
- (BOOL)telephotoLimitsReachedForFrameStatisticsByPortType:(id)a0;

@end
