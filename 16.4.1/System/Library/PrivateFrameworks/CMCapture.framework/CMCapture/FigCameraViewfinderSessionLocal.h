@class NSString, FigCaptureSessionProxy, FigCameraViewfinderLocal, FigCameraViewfinderStream, FigStateMachine, NSObject;
@protocol OS_dispatch_queue;

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate> {
    FigCameraViewfinderLocal *_viewfinder;
    FigStateMachine *_stateMachine;
    BOOL _ended;
    FigCaptureSessionProxy *_captureSessionProxy;
    long long _identifier;
    FigCameraViewfinderStream *_previewStream;
    NSObject<OS_dispatch_queue> *_previewStreamQueue;
    BOOL _previewStreamClosed;
    int _previewStreamClosedErrorStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePreviewStream;
- (id)_initWithOwningViewfinder:(id)a0 captureSessionProxy:(id)a1 delegateStorage:(id)a2;
- (void)_captureSessionDidStop;
- (void)captureSession:(id)a0 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (long long)identifier;
- (void)cameraViewfinderStream:(id)a0 didCloseWithStatus:(int)a1;
- (void)_captureSessionDidCapturePhotoWithStatus:(int)a0 thumbnailData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)dealloc;
- (void)captureSessionPreviewTapDidClose:(id)a0;
- (id)viewfinder;
- (void)openPreviewStreamWithOptions:(id)a0;
- (void)captureSessionPreviewTapDidOpen:(id)a0;
- (void)cameraViewfinderStreamDidOpen:(id)a0;

@end
