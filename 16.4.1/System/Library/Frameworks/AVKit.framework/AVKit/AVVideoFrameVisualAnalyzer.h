@class VKCImageAnalyzer, VKCImageAnalysis, NSTimer, AVPlayerLayer, AVPlayerController, AVObservationController;
@protocol AVVideoFrameVisualAnalyzerDelegate;

@interface AVVideoFrameVisualAnalyzer : NSObject {
    AVObservationController *_playerObservationController;
    int _currentAnalysisRequestID;
    double _lastCurrentTimeChangeTime;
    NSTimer *_timeObservingTimer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAnalysisTime;
    VKCImageAnalysis *_lastAnalysis;
}

@property (retain, nonatomic) VKCImageAnalyzer *imageAnalyzer;
@property (nonatomic) BOOL actuallyEnabled;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (weak, nonatomic) id<AVVideoFrameVisualAnalyzerDelegate> delegate;
@property (nonatomic) BOOL enabled;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)_analysisTypes;
- (BOOL)_canPerformAnalysisOnCurrentAsset;
- (BOOL)_canStartAnalysis;
- (void)_cancelAllVideoFrameAnalysis;
- (void)_handleVideoFrameAnalysis:(id)a0 error:(id)a1;
- (id)_imageAnalysisQueue;
- (void)_resetAnalysis;
- (void)_setupTimeObservingTimerIfNeeded;
- (void)_startVideoFrameAnalysis;
- (void)_startVideoFrameAnalysisAfterDelayIfNeeded;
- (void)_updateActualEnabledStateIfNeeded;
- (void)_updateAnalysisIfNeeded;
- (void)_updateObserversIfNeeded;
- (long long)_videoFrameOrientation;
- (long long)_vkImageOrientationFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithPlayerController:(id)a0 playerLayer:(id)a1;

@end
