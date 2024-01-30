@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureDevice;

@interface RPPipViewController : UIViewController

@property (retain, nonatomic) AVCaptureSession *pipSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (nonatomic) long long initialOrientation;
@property (nonatomic) long long previousOrientation;
@property (nonatomic) double previousOrientationWidth;
@property (nonatomic) double previousOrientationHeight;
@property (nonatomic) long long cameraPosition;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)cameraWithPosition:(long long)a0;
- (void)stopPipSession;
- (void)startPipSession;
- (id)initWithOrientation:(long long)a0 position:(long long)a1;
- (id)_pipView;
- (void)_updateViewGeometry;
- (void)setUpPipSession;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)a0;
- (void)_deviceOrientationDidChange;

@end
