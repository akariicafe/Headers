@class AVCaptureVideoPreviewLayer, NSString, NSError, NSDate, CAShapeLayer, AVCaptureSession, NSObject, AVCaptureDevice;
@protocol OS_dispatch_queue;

@interface VPScannerView : UIView <AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureDevice *_avCaptureDevice;
    NSObject<OS_dispatch_queue> *_avCaptureQueue;
    AVCaptureSession *_avCaptureSession;
    AVCaptureVideoPreviewLayer *_avPreviewLayer;
    struct HCImagePerspectiveReader { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct InternalDataStructPersp *x5; char *x6; BOOL x7; } *_reader;
    unsigned long long _readerWidth;
    unsigned long long _readerHeight;
    unsigned long long _readerRowBytes;
    unsigned long long _readerLastWatermarkTicks;
    unsigned long long _readerResetTicks;
    float _readerLastProgress;
    BOOL _scanning;
    CAShapeLayer *_viewfinderBorderLayer;
    CAShapeLayer *_viewfinderRevealLayer;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *firstScannedCodeDate;
@property (retain) NSDate *firstCapturedFrameDate;
@property unsigned long long readerResetCount;
@property unsigned long long extractedCodeLength;
@property (retain) NSError *latestError;
@property (nonatomic) long long autoFocusRangeRestriction;
@property (nonatomic) long long focusMode;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)_initCommon;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (id)_setupCapture;
- (void)_postMetricAndResetAnalyticsState;
- (void)_handleCaptureSessionStarted:(id)a0;
- (void)_handleCaptureSessionStopped:(id)a0;
- (void)_handleCaptureSessionRuntimeError:(id)a0;
- (void)_handleCaptureSessionInterrupted:(id)a0;
- (void)_handleCaptureSessionInterruptionEnded:(id)a0;
- (id)_setupDevice:(id)a0;

@end
