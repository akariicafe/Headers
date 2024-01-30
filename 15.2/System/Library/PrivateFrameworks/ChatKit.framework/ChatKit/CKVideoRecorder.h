@class AVCaptureMovieFileOutput, AVCaptureVideoPreviewLayer, NSURL, AVCaptureStillImageOutput, NSString, AVCaptureSession, AVCaptureDevice, NSObject, AVCaptureDeviceInput;
@protocol OS_dispatch_queue, CKVideoRecorderDelegate;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {
    long long _currentDevice;
    BOOL _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *rearVideoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *frontVideoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) AVCaptureMovieFileOutput *videoOutput;
@property (retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic) long long cameraDevice;
@property (weak, nonatomic) id<CKVideoRecorderDelegate> delegate;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)captureOutput:(id)a0 didStartRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)takePicture;
- (void).cxx_destruct;
- (id)init;
- (id)audioDevice;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)_cameraWithPosition:(long long)a0;
- (void)setupCamera:(id)a0;
- (id)frontFacingCamera;
- (id)rearFacingCamera;
- (BOOL)startVideoCapture;
- (void)captureOutput:(id)a0 didFinishRecordingToOutputFileAtURL:(id)a1 fromConnections:(id)a2 error:(id)a3;
- (void)dealloc;
- (void)stopVideoCapture;
- (void)cancel;

@end
