@class NSString, VKAVCapture, VKAVCapturePreviewView, NSObject;
@protocol OS_dispatch_queue;

@interface VKAVCaptureFrameProvider : VKFrameProvider <AVCaptureVideoDataOutputSampleBufferDelegate, VKAVCapturePreviewViewDelegate, AVCapturePhotoCaptureDelegate, VKAVCaptureDelegate, VKZoomable> {
    VKAVCapturePreviewView *_avCapturePreviewView;
    VKAVCapture *_avCapture;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    BOOL _startWhenReady;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visionRegionOfInterest;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _visionToCroppedImageTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _visionToLayerTransform;
    BOOL _respondsToDidCapturePhoto;
    BOOL _respondsToDidZoom;
    BOOL _respondsToIsRunning;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } interestPoint;
@property (readonly, nonatomic) BOOL hasTorch;
@property (nonatomic, getter=isTorchOn) BOOL torchOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double minZoomFactor;
@property (readonly, nonatomic) double maxZoomFactor;
@property (nonatomic) double zoomFactor;

- (void)capturePhoto;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)previewView;
- (BOOL)isRunning;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithConfiguration:(id)a0;
- (void)prepare;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)startRunning;
- (void)stopRunning;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)avCapture:(id)a0 cameraAccessGranted:(BOOL)a1;
- (void)didChangeBoundsForPreviewView:(id)a0;
- (void)didChangeInterfaceOrientationForPreviewView:(id)a0;

@end
