@class BWFigVideoCaptureStream;

@interface BWBravoStreamSelector : NSObject {
    BWFigVideoCaptureStream *_wideStream;
    BWFigVideoCaptureStream *_teleStream;
    BWFigVideoCaptureStream *_superWideStream;
    float _teleMaxAEGain;
    float _teleAEGainHysteresisLag;
    int _teleToWideFocusDistance;
    int _wideToTeleFocusDistance;
    int _teleMaxSubsequentFramesAtMaxGain;
    BWFigVideoCaptureStream *_currentMasterStream;
    BWFigVideoCaptureStream *_recommendedMasterStream;
    int _selectionBehavior;
    BOOL _allowSwitchesWithFineMovement;
    float _previousZoomFactor;
    long long _timeOfLastZoomFactorChange;
    BOOL _waitingForSlaveFocusAfterZoomChange;
    int _teleMaxGainReachedCounter;
    float _minFocusDistanceChangeForSceneChange;
    float _minLuxLevelChangeForSceneChange;
    BOOL _resetSceneChangeMonitoring;
    BOOL _sceneChangeDetected;
    int _initialLuxLevel;
    float _initialFocusDistance;
    BOOL _lockWhenExposureAndFocusAreStable;
    BWFigVideoCaptureStream *_lockedStream;
}

@property (readonly, nonatomic, getter=isLensMakersFocusDistanceRequired) BOOL lensMakersFocusDistanceRequired;
@property (nonatomic) float teleMaxAEGain;
@property (nonatomic) int selectionBehavior;
@property (readonly, nonatomic) BWFigVideoCaptureStream *slaveStreamBlockingFocusAndExposureStability;

+ (void)initialize;

- (void)unlock;
- (void)_updateSceneChangeMonitorWithFrameStatisticsByPortType:(id)a0 fromMasterStream:(id)a1 zoomFactor:(float)a2;
- (id)_preferredMasterStreamForFrameStatisticsByPortType:(id)a0;
- (BOOL)_selectionBehaviorAllowsSwitchOverTo:(id)a0 forFrameStatisticsByPortType:(id)a1 zoomFactor:(float)a2 blockedByExposureFocusStability:(BOOL *)a3;
- (void)_attemptLockWithFrameStatistics:(id)a0;
- (BOOL)_exposureAllowsSwitchToRecommendedMasterStream:(id)a0 frameStatisticsByPortType:(id)a1;
- (BOOL)telephotoLimitsReachedForFrameStatistiscsByPortType:(id)a0;
- (BOOL)_focusIsStable:(id)a0;
- (BOOL)_exposureAndFocusStableForSwitchOverTo:(id)a0 forFrameStatisticsByPortType:(id)a1;
- (id)initWithStreamSelectionAttributes:(id)a0 wideStream:(id)a1 teleStream:(id)a2 superWideStream:(id)a3;
- (void)resetWithZoomFactor:(float)a0 currentMasterStream:(id)a1;
- (void)lockWhenExposureAndFocusAreStable;
- (void)dealloc;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)a0 frameStatisticsByPortType:(id)a1 zoomFactor:(float)a2;

@end
