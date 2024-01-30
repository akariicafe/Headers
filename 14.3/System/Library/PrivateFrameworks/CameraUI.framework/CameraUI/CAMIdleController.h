@class NSTimer, NSString;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>

@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer;
@property (readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
@property (retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panoramaRequestDidStartCapturing:(id)a0;
- (void)videoRequestDidStartCapturing:(id)a0;
- (void)panoramaRequestDidStopCapturing:(id)a0 interrupted:(BOOL)a1;
- (void)videoRequestDidStopCapturing:(id)a0;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)a0;
- (void)timelapseRequestDidStopCapturing;
- (void)stillImageRequestDidStopCapturingStillImage:(id)a0;
- (void)startUpdatingIdleTimer;
- (void)_teardownEnableIdleTimer;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)timelapseRequestDidResumeCapturing;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)a0;
- (void)stopUpdatingIdleTimer;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void)timelapseRequestDidStartCapturing;
- (void)_delayIdleTimerByTimeInterval:(double)a0;

@end
