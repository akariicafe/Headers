@class AXMCaptureVideoDataOutput, AVCaptureSession, NSString, AXMVisionAnalysisOptions, NSObject;
@protocol OS_dispatch_queue, AXMAVCaptureSessionNodeDelegate, AXMAVCaptureSessionNodeFrameDelegate;

@interface AXMAVCaptureSessionNode : AXMSourceNode <AVCaptureVideoDataOutputSampleBufferDelegate, AXMAVCaptureSessionNodeFrameDelegate> {
    NSObject<OS_dispatch_queue> *_autotrigger_queue;
}

@property (weak, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (weak, nonatomic) id<AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate;
@property (weak, nonatomic) id<AXMAVCaptureSessionNodeFrameDelegate> frameDelegate;
@property (retain, nonatomic) AXMCaptureVideoDataOutput *axVideoDataOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)setShouldProcessRemotely:(BOOL)a0;
- (void)produceImage:(id)a0;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)beginFrameEventsWithAVCaptureSession:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)addVideoDataOutputWithAVCaptureSession:(id)a0 queue:(id)a1;
- (void)endVideoFrameEvents;
- (void)captureSessionNode:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)triggerWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 interfaceOrientation:(long long)a1 mirrored:(BOOL)a2 options:(id)a3 userContext:(id)a4;
- (void)endAutoTriggerOfVideoFrameEvents;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)a0 options:(id)a1 delegate:(id)a2;

@end
