@protocol NSCopying;

@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {
    double _vibrationPatternMaximumDuration;
    double _vibrationPatternDidStartTimestamp;
    unsigned long long _maximumFramesPerSecondRate;
    void *_recordedData;
    unsigned long long _recordedDataElementsCount;
    unsigned long long _recordedDataCursor;
    BOOL _isWarmUpModeEnabled;
    double _warmUpModeDidStartTimestamp;
    BOOL _displayLinkHasRefreshedAtLeastOnce;
    id<NSCopying> _displayLinkManagerObserverToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)a0;
- (void)didStopRecording;
- (void)recordNormalizedTouchLocation:(struct CGPoint { double x0; double x1; })a0 touchPhase:(int)a1;
- (BOOL)getNormalizedTouchLocation:(struct CGPoint { double x0; double x1; } *)a0 touchPhase:(int *)a1 forTimeInterval:(double)a2;
- (void)_updateMaximumFramesPerSecondRate:(id)a0;
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)a0;
- (void)_recordFinalDataWithNormalizedTouchLocation:(struct CGPoint { double x0; double x1; })a0 touchPhase:(int)a1 timeIntervalSinceBeginningOfPattern:(double)a2;

@end
