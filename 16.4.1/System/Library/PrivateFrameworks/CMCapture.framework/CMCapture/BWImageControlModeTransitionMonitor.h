@class NSDictionary, NSMutableDictionary;

@interface BWImageControlModeTransitionMonitor : NSObject {
    NSMutableDictionary *_currentSphereModesByPortType;
    NSMutableDictionary *_currentFrameRatesByPortType;
    NSMutableDictionary *_currentLTMCurvesByPortType;
    int _ltmCurvesTransitionFrameWaitCount;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstFramePTS;
    int _frameWaitCount;
    BOOL _coarseFocusHasSettled;
}

@property (copy, nonatomic) NSDictionary *expectedSphereModesByPortType;
@property (copy, nonatomic) NSDictionary *expectedMinimumFrameRatesByPortType;
@property (copy, nonatomic) NSDictionary *expectedLTMCurvesByPortType;
@property (nonatomic) int ltmCurvesTransitionFrameCount;
@property (nonatomic) double coarseFocusCheckTimeout;
@property (nonatomic) BOOL waitForTorchToRampUp;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)isTransitionCompleteWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 masterCaptureStreamPortType:(id)a1 activeSlaveStreamPortType:(id)a2;

@end
