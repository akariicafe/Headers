@class NSTimer, NSString;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>

@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer;
@property (readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
@property (retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoRequestDidStartCapturing:(id)a0;
- (void)panoramaRequestDidStartCapturing:(id)a0;
- (void)panoramaRequestDidStopCapturing:(id)a0 interrupted:(BOOL)a1;
- (void)videoRequestDidStopCapturing:(id)a0;
- (void)stillImageRequestDidStopCapturingStillImage:(id)a0;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)a0;
- (void)_delayIdleTimerByTimeInterval:(double)a0;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)a0;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)_teardownEnableIdleTimer;
- (void)timelapseRequestDidStopCapturing;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)dealloc;
- (void)timelapseRequestDidResumeCapturing;
- (void)startUpdatingIdleTimer;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void)stopUpdatingIdleTimer;
- (id)init;
- (void)timelapseRequestDidStartCapturing;
- (void).cxx_destruct;

@end
