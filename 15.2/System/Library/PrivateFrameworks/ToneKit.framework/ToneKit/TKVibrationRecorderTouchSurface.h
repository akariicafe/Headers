@class TKVibrationRecorderTouchSurfaceRecordedDataWrapper, TLVibrationPattern;
@protocol NSCopying, TKVibrationRecorderTouchSurfaceDelegate;

@interface TKVibrationRecorderTouchSurface : TKVibrationRecorderRippleView {
    BOOL _isRecordingModeEnabled;
    double _vibrationPatternMaximumDuration;
    TKVibrationRecorderTouchSurfaceRecordedDataWrapper *_recordedDataWrapper;
    BOOL _shouldIgnoreCurrentTouch;
    BOOL _isReplayModeEnabled;
    TLVibrationPattern *_vibrationPatternToReplay;
    double _replayModeWasEnteredStartTime;
    id<NSCopying> _displayLinkManagerObserverToken;
}

@property (weak, nonatomic) id<TKVibrationRecorderTouchSurfaceDelegate> delegate;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)enterReplayModeWithVibrationPattern:(id)a0;
- (void)enterRecordingMode;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)a0 styleProvider:(id)a1;
- (void)exitRecordingMode;
- (void)currentVibrationComponentShouldEnd;
- (void)_recordTouchLocation:(struct CGPoint { double x0; double x1; })a0 touchPhase:(int)a1;
- (void)_updateTouchLocationForReplayMode:(id)a0;

@end
