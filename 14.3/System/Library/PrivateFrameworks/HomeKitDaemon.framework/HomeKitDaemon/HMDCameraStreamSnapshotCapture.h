@class HMFTimer, NSString, HMDVideoStreamInterface, HMDCameraStreamSessionID, NSObject;
@protocol OS_dispatch_queue, HMDCameraStreamSnapshotCaptureDelegate;

@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFTimerDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDCameraStreamSnapshotCaptureDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *streamSessionID;
@property (retain, nonatomic) HMFTimer *lastDecodedFrameTimer;
@property (nonatomic) BOOL capturingLastFrame;
@property (nonatomic) BOOL capturingCurrentFrame;
@property (readonly, nonatomic) HMDVideoStreamInterface *videoStreamInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)videoStream:(id)a0 didGetLastDecodedFrame:(id)a1;
- (id)initWithWorkQueue:(id)a0 videoStreamInterface:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)captureLastFrame;
- (void)captureCurrentFrame;
- (void)_callDidGetNewSnapshot:(id)a0;
- (void)_callDidGetLastSnapshot:(id)a0;
- (void)_captureFrame;
- (void)_callSnapshotDelegate:(id)a0;

@end
