@class NSTimer, NSString;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>

@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer;
@property (readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
@property (retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)a0;
- (void)videoRequestDidStopCapturing:(id)a0;
- (void)stillImageRequestDidStopCapturingStillImage:(id)a0;
- (void)videoRequestDidStartCapturing:(id)a0;
- (void)panoramaRequestDidStartCapturing:(id)a0;
- (void)stopUpdatingIdleTimer;
- (void)_delayIdleTimerByTimeInterval:(double)a0;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)timelapseRequestDidResumeCapturing;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void).cxx_destruct;
- (void)_teardownEnableIdleTimer;
- (void)timelapseRequestDidStopCapturing;
- (void)panoramaRequestDidStopCapturing:(id)a0 interrupted:(BOOL)a1;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)a0;
- (id)init;
- (void)timelapseRequestDidStartCapturing;
- (void)dealloc;
- (void)startUpdatingIdleTimer;

@end
